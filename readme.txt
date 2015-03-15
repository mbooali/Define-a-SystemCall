Design and implement a new kernel function, yourname_gettime(), that returns current system time via a call by reference argument. If the flag is 1 then your kernel function should also log a message in syslog. If the flag value is something other than 0 or 1, or the currenttime pointer is invalid, an appropriate message should be logged in syslog and a value other than 0 should be returned as the error code from the function. Value 0 is returned in the case of success. The function prototype should be: 
int yourname_gettime(int flag, struct timeval *currenttime)
Thereafter, write a user-space wrapper for your system call. A test program is needed that tests the functionality of your system call. 
The task consists of the following steps: 
1) Definition of a new system call in system call table. 
2) Implementation of the new kernel function in a new file. 
3) Adding an entry to the Makefile to compile the new file as a built-in module. 
4) Compiling and installing the kernel. 
5) Writing a program to test the system call by including the header file.