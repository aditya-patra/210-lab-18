/*
Aditya Patra
Movie Reviews
Lab 18

Purpose:
Create linked list of movie reviews
Allow movie reviewer to choose whether new reviews should be added to the head or tail of the list
When all reviews have been input, print out reviews and average review
*/
#include <iostream>
using namespace std;

const int SIZE = 7;  

struct Reviews {
    float rating;
    string review;
    Reviews *next;
};

int main() {
    Reviews *head = nullptr;

    Reviews *newReview;
    int end = 0;
    float rating;
    string review;
    bool cont;
    cout << "Enter 0 for appending new reviews to the head of the list and 1 for appending to the tail: ";
    cin >> end;
    while (true) {
        cout << "Enter your rating of the movie: ";
        cin >> rating;
        cout << "Enter your review of the movie: ";
        getline(cin, review);
    }

    return 0;
}
