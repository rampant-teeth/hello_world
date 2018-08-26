#include <iostream>
//using namespace std;

//*************************************Compiling Purpose******************************************
//to compile one program from multiple files: g++ -o hello_world file1.cpp file2.cpp file3.cpp
//to compile multiple programs at once from different files: g++ -c file1.cpp file2.cpp file3.cpp
//if you see errors and want more info use: g++ -Wall -o errorlog file1.cpp
//then view errorlog in current directory with cat errorlog
//************************************************************************************************

//**************************************Linux Commands********************************************
//to move file to subdir: mv *.c bak
//to move all files from bak subdirectory to current directory: mv bak/* .
//to rename directory bak to bak2: mv bak bak2
//to move file to specified location: mv main.cpp main.h /home/usr/rapid/
int main(){
	std::cout << "hello world" << std::endl;
}
