#include <iostream>       
using namespace std;      
struct Book                                         // structure declaration 
{ 
    string title;                                      // book title 
    string author;                                 // author name 
    float price;                                      // book price 
    int pages;                                        // total pages 
}; 
int main() 
{ 
    Book book1;                                    // first book variable 
    Book book2;                                   // second book variable 
 
 
 
    
 
 book1.title = "C++ Basics";         // title of first book 
   book1.author = "Bjarne";             // author 
    book1.price = 500.5;                   // price 
    book1.pages = 300;                    // pages 
    book2.title = "Programming";    // title of second book 
    book2.author = "John";            // author 
    book2.price = 650;                    // price 
    book2.pages = 450;                  // pages 
    cout << "Book 1" << endl;      
    cout << book1.title << endl;   
    cout << book1.author << endl;  
    cout << book1.price << endl;   
    cout << book1.pages << endl;   
    cout << "Book 2" << endl;      
    cout << book2.title << endl;   
    cout << book2.author << endl;  
    cout << book2.price << endl;   
    cout << book2.pages << endl;   
    return 0;            // end 
}
