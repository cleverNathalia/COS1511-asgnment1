/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: danielle
 *
 * Created on 03 April 2019, 9:19 PM
 */

#include <iostream>
#include <math.h>
#include <string>
#include <list>
#include <vector>

using namespace std;

string seats[5][9][6] = {{
    {"A1", "A2", "A3", "A4", "A5", "A6"},
    {"B1", "B2", "B3", "B4", "B5", "B6"},
    {"C1", "C2", "C3", "C4", "C5", "C6"},
    {"D1", "D2", "D3", "D4", "D5", "D6"},
    {"E1", "E2", "E3", "E4", "E5", "E6"},
    {"F1", "F2", "F3", "F4", "F5", "F6"},
    {"G1", "G2", "G3", "G4", "G5", "G6"},
    {"H1", "H2", "H3", "H4", "H5", "H6"},
    {"I1", "I2", "I3", "I4", "I5", "I6"}
},
{
    {"A1", "A2", "A3", "A4", "A5", "A6"},
    {"B1", "B2", "B3", "B4", "B5", "B6"},
    {"C1", "C2", "C3", "C4", "C5", "C6"},
    {"D1", "D2", "D3", "D4", "D5", "D6"},
    {"E1", "E2", "E3", "E4", "E5", "E6"},
    {"F1", "F2", "F3", "F4", "F5", "F6"},
    {"G1", "G2", "G3", "G4", "G5", "G6"},
    {"H1", "H2", "H3", "H4", "H5", "H6"},
    {"I1", "I2", "I3", "I4", "I5", "I6"}
},
{
    {"A1", "A2", "A3", "A4", "A5", "A6"},
    {"B1", "B2", "B3", "B4", "B5", "B6"},
    {"C1", "C2", "C3", "C4", "C5", "C6"},
    {"D1", "D2", "D3", "D4", "D5", "D6"},
    {"E1", "E2", "E3", "E4", "E5", "E6"},
    {"F1", "F2", "F3", "F4", "F5", "F6"},
    {"G1", "G2", "G3", "G4", "G5", "G6"},
    {"H1", "H2", "H3", "H4", "H5", "H6"},
    {"I1", "I2", "I3", "I4", "I5", "I6"}
},
{
    {"A1", "A2", "A3", "A4", "A5", "A6"},
    {"B1", "B2", "B3", "B4", "B5", "B6"},
    {"C1", "C2", "C3", "C4", "C5", "C6"},
    {"D1", "D2", "D3", "D4", "D5", "D6"},
    {"E1", "E2", "E3", "E4", "E5", "E6"},
    {"F1", "F2", "F3", "F4", "F5", "F6"},
    {"G1", "G2", "G3", "G4", "G5", "G6"},
    {"H1", "H2", "H3", "H4", "H5", "H6"},
    {"I1", "I2", "I3", "I4", "I5", "I6"}
},
{
    {"A1", "A2", "A3", "A4", "A5", "A6"},
    {"B1", "B2", "B3", "B4", "B5", "B6"},
    {"C1", "C2", "C3", "C4", "C5", "C6"},
    {"D1", "D2", "D3", "D4", "D5", "D6"},
    {"E1", "E2", "E3", "E4", "E5", "E6"},
    {"F1", "F2", "F3", "F4", "F5", "F6"},
    {"G1", "G2", "G3", "G4", "G5", "G6"},
    {"H1", "H2", "H3", "H4", "H5", "H6"},
    {"I1", "I2", "I3", "I4", "I5", "I6"}
}};

int track[5] = {0,0,0,0,0};

/*
 * 
 */
void flight() {
    string seat;

    //    WELCOME MESSAGE
    cout << "Welcome to COS1511 Flight Booking System:" << endl;
    string userName;
    cout << endl;

    //    GET USERNAME
    cout << "Please enter your full name:" << endl;
    getline(cin, userName);
    cout << endl;
    

    //    DISPLAY FLIGHT TIMES
    cout << "The available travel time for flights are:" << endl;
    cout << "     Depart     Arrive" << endl;
    cout << "1.   7.00       9.30" << endl;
    cout << "2.   9.00       11.30" << endl;
    cout << "3.   11.00      13.30" << endl;
    cout << "4.   13.00      15.30" << endl;
    cout << "5.   15.00      17.30" << endl;
    cout << "Choose the time by entering the option number from the displayed list:" << endl;

    //    GET USER'S TIME
    int time;
    cin >> time;
    cout << endl;

    //    ERROR MESSAGE - WRONG CHOSEN TIME
    while (time < 1 || time > 5) {
        cout << "Incorrect option! Please choose from 1-5:" << endl;
        cout << "Choose the time by entering the option number from the displayed list:" << endl;
        cout << endl;
        cin >> time;
    };

    //    DISPLAY TIME MESSAGE
    int realTime;

    switch (time) {
        case 1:
            cout << "The available seats for 7.00 are as follows:" << endl;
            realTime = 7;
            break;
        case 2:
            cout << "The available seats for 9.00 are as follows:" << endl;
            realTime = 9;
            break;
        case 3:
            cout << "The available seats for 11.00 are as follows:" << endl;
            realTime = 11;
            break;
        case 4:
            cout << "The available seats for 13.00 are as follows:" << endl;
            realTime = 13;     
            break;
        case 5:
            cout << "The available seats for 15.00 are as follows:" << endl;
            realTime = 15;
            break;
    }
    cout << "First Class (1920.00)" << endl;
    for (int i = 0; i < 9; i++) {
        if (i == 4) {
            cout << "Economy Class (1600.00)" << endl;
        }
        for (int j = 0; j < 6; j++) {
            if (j == 5) {
                cout << "|" + seats[time-1][i][j] + "|" << endl;
            } else {
                cout << "|" + seats[time-1][i][j] + "|";
            }
            if (j == 2) {
                cout << "---- ";
            }
            if (i == 8 && j == 1) {
                break;
            }

        }

    }



    //GET USER'S CHOSEN SEAT
    cout << endl;
    cout << "Seats that are already taken are indicated with an asterisk" << endl;
    cout << "Please key in a seat number to choose a seat (eg:A2)" << endl;

    cin >> seat;
    for (int i = 0; i < seat.size(); i++) {
        seat[i] = toupper(seat[i]);
    }

    int row = seat[0] - 'A';
    int col = seat[1] - '1';

    
    while (seats[time-1][row][col] == "**") {
        cout << "Sorry, the seat is already taken. Please choose a seat that is available." << endl;
        cin >> seat;
        for (int i = 0; i < seat.size(); i++) {
            seat[i] = toupper(seat[i]);
        }
        row = seat[0] - 'A';
        col = seat[1] - '1';
    }
    track[time-1]++;
    seats[time-1][row][col] = "**";
    
     

    //    PRINT FLIGHT TICKET
    cout << endl;
    string seat_class;
    string price;

    if (seat[0] >= 'E') {
        seat_class = "Economy Class";
        price = "1600.00";
    } else {
        seat_class = "First Class";
        price = "1920.00";
    }

    string dep_time = to_string(realTime) + ":00";
    string ariv_time = to_string(realTime + 2) + ":30";

    cout << "******************************" << endl;
    cout << "Travel ticket for FLIGHT" << endl;
    cout << "******************************" << endl;
    printf("%-15s:\t%-15s\t%-20s:%15s\n", "Name", userName.c_str(), "Travel Ticket Class", seat_class.c_str());
    printf("%-15s \t%-15s\t%-20s:%15s\n", " ", " ", "Seat No", seat.c_str());
    printf("%-15s:\t%-15s\t%-20s:%15s\n", "Departure", "Johannesburg", "Departure Time", dep_time.c_str());
    printf("%-15s:\t%-15s\t%-20s:%15s\n", "Destination", "Cape Town", "Arrival Time", ariv_time.c_str());
    cout << "******************************" << endl;
    cout << "Amount " + price + " Thank you for booking with COS1511. Your travel agent for queries is Danielle Groenewald." << endl;
    cout << endl;

    //    ASK TO BOOK ANOTHER FLIGHT
    char answer;
    cout << "Do you want to make another booking? (Y/N)?" << endl;
    cin >> answer;

    answer = toupper(answer);

    if (answer == 'Y') {
        cin.get();
        cout << endl;
        flight();
    } else {
        cout << endl;
        cout << "Number of bookings made for 7.00am : " + to_string(track[0]) << endl;
        cout << "Number of bookings made for 9.00am : " + to_string(track[1]) << endl;
        cout << "Number of bookings made for 11.00am : " + to_string(track[2]) << endl;
        cout << "Number of bookings made for 13.00pm : " + to_string(track[3]) << endl;
        cout << "Number of bookings made for 15.00pm : " + to_string(track[4]) << endl;
    }

}

int main() {
    
    flight();

}

