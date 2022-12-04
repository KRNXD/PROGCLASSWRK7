/*

Header to include in source code:

 * Class: CMSC140 CRN

 * Instructor: Professor Koo 

 * Classwork/Homework/<7>

 * Description: Develop a program that implements a function named largerThanN  that accepts three arguments: an array of type int,  the size of the array of type int and an int number n.

 * Due Date: 11/18/2021

 * I pledge that I have completed the programming assignment independently.

   I have not copied the code from a student or any source.

   I have not given my code to any student.

   Print your Name here: Kieran Yalla
*/



#include<iostream>

using namespace std;

// function that accepts three arguments
void largerThanN(int arr[],int size,int n){
   cout << "The numbers that are larger than " << n <<" are: ";
   int i;
   // looping the array
   for(i= 0; i < size; i++){
       if(arr[i]>n){
           cout << arr[i] << " ";
       }
   }
}

int main(){
    // creating the array
   int numbers[10]={30,20,50,2,-1,44,3,12,90,32};
   int n;
   int ssiizzee = sizeof(numbers) / sizeof(numbers[0]);
   //user input
   cout << "Enter a number:" <<endl;
   cin >> n;
   // function is called
   largerThanN(numbers,ssiizzee,n);
   return 0;
}


