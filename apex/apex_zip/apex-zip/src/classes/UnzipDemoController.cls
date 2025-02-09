public with sharing class UnzipDemoController
{
	// Unzipped component state, in this case the Id of the ZipFile__c record
	public String unzippedState {get;set;}
	
	public UnzipDemoController()
	{
		ApexPages.addMessage(new ApexPages.Message(ApexPages.Severity.Info, 
			'Unzip processing will start once the file is selected, please wait to be redirected to the results after this.'));
	}
	
	// Action Function method called by client code once all entries have been unzipped
	public PageReference unzipped()
	{
		// Redirect to ZipFile record
		return new PageReference('/' + unzippedState);	
	}
		
	@RemoteAction
	// JavaScript Remoting method called as each item is unzipped from the file
	public static String receiveZipFileEntry(String filename, String path, String data, String state)
	{
		// First file?
		if(state=='')
		{
			// Create a record to store unzipped files as attachments
			ZipFile__c zipFile = new ZipFile__c();
			zipFile.Name = filename;
			insert zipFile;
			state = zipFile.Id;
		}
		
		// Attach unzipped file
		Attachment attachment = new Attachment();
		attachment.Body = EncodingUtil.base64Decode(data);
		attachment.Name = path;
		attachment.ParentId = state;
		insert attachment;
		
		return state;		
	}	
}