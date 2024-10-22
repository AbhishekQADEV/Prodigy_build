# algorithms

Welcome to this open source repository of different kinds of algorithms implemented in C. New contributors are particularly encouraged to contribute. This is an excellent resource for learning C programming and computer science concepts while also participating in open-source. 

## Requirements

- GCC compiler (preferably v7.3.0 or higher)
- Makefile or GNU make utility (especially for Linux users)
- Text Editor (Visual Studio Code, Sublime, Atom etc.)

## Setting up the environment

### Mac:

1. Install Homebrew: ```$ /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"```
2. Install GCC compiler: ```brew install gcc```
3. Install Make: ```brew install make```
4. Clone the repository: ```git clone https://github.com/<your-github-username>/algorithms.git```
5. Navigate into the cloned repository: ```cd algorithms```
6. Compile the code files. 

### Windows:

1. Install MinGW from https://mingw-w64.org/doku.php/download/win-builds.
2. Add the MinGW bin directory to your environment path
3. Clone the repository: ```git clone https://github.com/<your-github-username>/algorithms.git```
4. Navigate into the cloned repository: ```cd algorithms```
5. Compile the code files.

### Linux:

1. Install GCC and Make: ```sudo apt-get install build-essential```
2. Clone the repository: ```git clone https://github.com/<your-github-username>/algorithms.git```
3. Navigate into the cloned repository: ```cd algorithms```
4. Compile the code files. 

## Compiling code

### Linux:

Compiling with a makefile:
```
make
```
Compiling without a makefile:
```
gcc -o OUTPUT_FILE_NAME INPUT_FILE_NAME.c
```
### Windows & Mac:

```
gcc -o OUTPUT_FILE_NAME INPUT_FILE_NAME.c
```

## Running the code

After compiling the code, run it using:
```
./OUTPUT_FILE_NAME
```

## Contributing
Please refer to the 'CONTRIBUTING.md' file for rules and advices regarding contributions.

## Deployment
If any of the code is related to the CI/CD pipeline, please refer to the specific documentation for steps for deployment steps.

