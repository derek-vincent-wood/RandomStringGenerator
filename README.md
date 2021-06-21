# RandomStringGenerator
A small script in C++ I made for generating a variable number of strings, each of a specified number of random ASCII characters, ostensibly for password generation, albeit given that the source of randomness is time, it may not be desirable. It loads all of the strings into a file whose name is specified by the user.

The executable is executed from the commandline with the following arguments: NUMBER_OF_PASSWORDS(DIGIT) LENGTH_OF_EACH_PASSWORD(DIGIT) FILENAME(STRING). 
For example, if I compile my executable and name it RSG.exe, the command to generate five passwords, each of which are 10 characters long, and have them go to a file named "password.txt" would be: ./RSG.exe 5 10 password.txt

I used g++ for compiling the code, and I used Cygwin to provide me a Linux-like terminal interface.
