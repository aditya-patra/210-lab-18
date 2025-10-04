/*
Aditya Patra
Movie Review
Lab 18

Purpose:
Create linked list of movie Review
Allow movie reviewer to choose whether new Review should be added to the head or tail of the list
When all Review have been input, print out Review and average review
*/
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 7;  

struct Review {
    float rating;
    string review;
    Review *next;
};


int main() {
    Review *head = nullptr;
    int end = 0;
    float rating;
    string review;
    string dummy; //flush input
    string cont;
    cout << "Enter 0 for appending new Review to the head of the list and 1 for appending to the tail: ";
    cin >> end;
    while (true) {
        cout << "Enter your rating of the movie: ";
        cin >> rating;
        cout << "Enter your review of the movie: ";
        getline(cin, dummy);
        getline(cin, review);
        if (end == 1) {
            addTail(head, rating, review);
        }
        else {
            addHead(head, rating, review);
        }
        cout << "Would you like to enter another review?(Y/n) ";
        cin >> cont;
        if (cont == "n") {
            break;
        }
    }
    printList(head);

    return 0;
}
