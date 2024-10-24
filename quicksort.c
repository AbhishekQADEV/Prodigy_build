// Implementing Doubly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node *next;
    struct Node *prev;
};

struct Node *head;

struct Node *CreateNode(){
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    return new;
}

void Insert(int val){
    struct Node *NewNode = CreateNode();
    NewNode->value = val;
    NewNode->next = head;
    NewNode->prev = NULL;
    
    if(head != NULL){
        head->prev = NewNode;
    }
    
    head = NewNode;
}

void Display(){
    struct Node *temp = head;
    printf("\nForward:\n");
    
    while(temp != NULL){
        printf("%d ", temp->value);
        temp = temp->next;
    }
}

void ReverseDisplay(){
    struct Node *temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    printf("\nBackward:\n");
    
    while(temp != NULL){
        printf("%d ", temp->value);
        temp = temp->prev;
    }
    
    printf("\n");
}

int main(){
    int n, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("Enter element: ");
        scanf("%d", &val);
        Insert(val);
    }
    
    Display();
    ReverseDisplay();
    
    return 0;
}

// Implementation of Binary Search Tree
#include <stdio.h>
#include <stdlib.h>

struct BST{
    int data;
    struct BST* left;
    struct BST* right;
};

struct BST* CreateNode(){
    struct BST* new = (struct BST*)malloc(sizeof(struct BST));
    new->left = NULL;
    new->right = NULL;
    return new;
}

void Insert(struct BST** RootPtr, int value){
    struct BST* temp = *RootPtr;
    
    if(temp == NULL){
        struct BST* NewNode = CreateNode();
        NewNode->data = value;
        *RootPtr = NewNode;
    }
    else if(value <= temp->data){
        struct BST* NewNode = CreateNode();
        NewNode->data = value;
        temp->left = NewNode;
    }
    else{
        struct BST* NewNode = CreateNode();
        NewNode->data = value;
        temp->right = NewNode;
    }
}

int Search(struct BST* RootPtr, int item){
    if(RootPtr == NULL){
        return 0;
    }
    else if(item == RootPtr->data){
        return 1;
    }
    else if(item < RootPtr->data){
        Search(RootPtr->left, item);
    }
    else{
        Search(RootPtr->right, item);
    }
}

void main(){
    struct BST* RootPtr = NULL;
    int item, cont, key;
    
    do{
        printf("Enter item: ");
        scanf("%d", &item);
        Insert(&RootPtr, item);
        printf("\n1 to keep inserting/ 0 to Exit: ");
        scanf("%d", &cont);
    }while(cont == 1);
    
    printf("\nEnter element to search: ");
    scanf("%d", &key);
    
    if(Search(RootPtr, key) == 0){
        printf("\nFound\n");
    }
    else{
        printf("\nNot Found\n");
    }
}

// Bubble Sort
#include <stdio.h>

void bubble_sort(int *array, int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(array[j] > array[j + 1]){
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

int main(void){
    int yarr[] = {3, 9, 4, 8, 7, 6, 1, 2, 0, 10};
    bubble_sort(yarr, 10);
    
    printf("[");
    for(int i = 0; i < 10; i++){
        printf("%d, ", yarr[i]);
    }
    printf("\b\b]\n");
    
    return 0;
}

// Count
#include <stdio.h>

void count(int num){
    printf("[");
    
    if(num > 20){
        for(int i = 0; i < num; i++){
            printf("\n%d, \n", i);
        }
    }
    else{
        for(int i = 0; i < num; i++){
            printf("%d", i);
        }
    }
    
    printf("]");
}

int main(){
    int num;
    printf("Count:~$ ");
    scanf("%d", &num);
    count(num);
    
    return 0;
}

// Even or Odd
#include <stdio.h>

int main(){
    long num;
    printf("Enter a number\n");
    scanf("%ld", &num);
    
    int rem = num % 2;
    
    if(rem == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}

// Factorial
#include <stdio.h>

int fak(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else if(n < 0){
        return 1;
        exit(1);
    }
    
    return n * fak(n-1);
}

int main(){
    printf("fak(1): %d\n", fak(1));
    printf("fak(2): %d\n", fak(2));
    printf("fak(3): %d\n", fak(3));
    printf("fak(4): %d\n", fak(4));
    printf("fak(5): %d\n", fak(5));
    printf("fak(-1): %d\n", fak(-1));
    
    return 1;
}

// Infinite Loop
#include <stdio.h>

int main(){
    long a;
    long b;
    
    for(a = 0, b = 1; b > a; b++){
        a++;
        printf("%ld \n %ld", a, b);
    }
    
    if(b == sizeof(long)){
        exit(1);
    }
}

// Linear Search
#include <stdio.h>

int linsearch(char **yarr, char *val){
    for(int i = 0; i < sizeof(yarr); i++){
        if(strcmp(yarr[i], val) == 0){
            return 0;
        }
    }
    
    return 1;
}

int main(){
    char *yarr[] = {"Shluck much", "much Shluck"};
    char *val = "Shluck Much";
    linsearch(yarr, val);
    
    return 0;
}

// Selection Sort
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(array[j] > array[j + 1]){
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

int main(void){
    int yarr[] = {3, 9, 4, 8, 7, 6, 1, 2, 0, 10};
    bubble_sort(yarr, 10);
    
    printf("[");
    for(int i = 0; i < 10; i++){
        printf("%d, ", yarr[i]);
    }
    printf("\b\b]\n");
    
    return 0;
}

// Keylogger
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void keylog(){
    FILE *fPtr;
    fPtr = fopen("keylogger.txt", "a");
    
    char a;
    scanf(" %c", &a);
    
    if(a != '\n'){
        fprintf(fPtr, "%c", a);
    }
    
    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);
    int hour = tm_struct->tm_hour;
    
    if(hour == 24){
        fclose(fPtr);
    }
}

int main(){
    keylog();
    
    return 0;
}

// Find Min
#include <stdio.h>

void print_arr(int *ptr, int size){
    putchar('[');
    
    for(int i = 0; i < size; i++){
        printf("%d", ptr[i]);
        
        if(i < size - 1){
            putchar(',');
        }
    }
    
    printf("]\n");
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int *find_min(int *ptr, int size){
    int *min = ptr;
    
    for(int i = 1; i < size; i++){
        if(ptr[i] < *min){
            min = &ptr[i];
        }
    }
    
    return min;
}

void selection_sort(int *ptr, int size){
    for(int i = 0; i < size - 1; i++){
        int *min = find_min(ptr + i, size - i);
        
        if(*min < ptr[i]){
            swap(min, &ptr[i]);
        }
    }
}

void fill(char **av, int *ptr, int size){
    for(int i = 0; i < size; i++){
        ptr[i] = atoi(av[i + 2]);
    }
}

int main(int argc, char *argv[]){
    if(argc < 3){
        puts("Usage: ./your-executable-name [array size] [array]");
        puts("Example: ./your-executable-name 3 2 1 0");
        return EXIT_FAILURE;
    }
    
    int size = atoi(argv[1]);
    
    if(size == 0){
        puts("Error: size of array can't be 0");
        return EXIT_FAILURE;
    }
    
    int *arr = (int *)malloc(size * sizeof(int));
    
    if(arr == NULL){
        return EXIT_FAILURE;
    }
    
    fill(argv, arr, size);
    
    printf("Before sorting: ");
    print_arr(arr, size);
    
    selection_sort(arr, size);
    
    printf("After sorting: ");
    print_arr(arr, size);
    
    free(arr);
    
    return EXIT_SUCCESS;
}