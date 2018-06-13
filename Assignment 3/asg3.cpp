#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    //declaration of integers
    int day, hour, minute, minutes;
    double fee;
    const double tax = 1.07, weekday = 0.5, weekend = 0.75, hour_disc = 0.15;

    //giving the price for a call and the formula to the customer

    cout << "\n ................................................. \n";
    cout << "The price for a call is calculated as follows: \n \n";
    cout << "20 cents a minute. \n";
    cout << "50% off if originated on weekdays \n    when before 8am or after 5pm.";
    cout << "75% off if originated on weekends. \n";
    cout << "15% off on any minutes after an hour at the given rate. \n";
    cout << "7% federal tax \n ...........................................\n \n";
    cout << "Please enter a number for the appropriate selection at each prompt: \n \n \n";
    cout << "Please indicate the day the call originated. \n \n";
    cout << " Sunday (1), Monday (2), Tuesday (3), Wednesday(4), \n Thursday (5), Friday (6), Saturday(7) \n";
    cout << "day: ";
    cin >> day;

    switch (day) {
        //these are weekday cases

        case 2: //Monday
            {
            cout << "Please enter time that call started. \n";
            cout << "hour  (0-23): ";
            cin >> hour;                                                                                                        //ask for the hour the call started
            cout << "minute  (0-59): ";
            cin >> minute;                                                                                                    //ask for the minute the call started
            if ( (((hour >= 0) && (hour <= 7)) || ((hour >= 18) && (hour <= 23))) && ((minute >= 0) && (minute <= 59)))      //if time is outside of the range of 8-17h and 0-59mins
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin >> minutes;                                                                                             //duration of call in minutes
                if (minutes > 60)                                                                                           //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * weekday * tax);                              //fee formula includes tax; weekday and after 60 mins discount
                    cout << "\n The price for the long distance call originating on";
                    cout << " Monday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';

                }
                else if (minutes <= 60)                                                                                     //if the call is less than or equal to 60 minutes
                {
                    fee = (0.20 * minutes * weekday * tax);                                                                    // fee formula includes taxes and weekday discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Monday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';
                }
            }

            else if (((hour >= 8) && (hour <= 17)) && ((minute >= 0) && (minute <= 59)))                                        //if time is between 8-17h and between 0-59mins
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin >> minutes;
                if (minutes > 60)                                                                                                //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * tax);                                             //fee formula includes taxes and over 60 minutes discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Monday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';

                }
                else if (minutes <= 60) {                                                                                        //if the call is less than or equal to 60 minutes
                    fee = (0.20 * minutes * tax);                                                                               // fee formula includes no discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Monday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';
                }

            }
            }
        break;

        case 3: //Tuesday
        {
            cout << "Please enter time that call started. \n";
            cout << "hour  (0-23): ";
            cin >> hour;                                                                                                        //ask for the hour the call started
            cout << "minute  (0-59): ";
            cin >> minute;                                                                                                    //ask for the minute the call started
            if ( (((hour >= 0) && (hour <= 7)) || ((hour >= 18) && (hour <= 23))) && ((minute >= 0) && (minute <= 59)))      //if time is outside of the range of 8-17h
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin >> minutes;                                                                                             //duration of call in minutes
                if (minutes > 60)                                                                                           //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * weekday * tax);                              //fee formula includes tax; weekday and after 60 mins discount
                    cout << "\n The price for the long distance call originating on";
                    cout << " Tuesday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';

                }
                else if (minutes <= 60)                                                                                     //if the call is less than or equal to 60 minutes
                {
                    fee = (0.20 * minutes * weekday * tax);                                                                    // fee formula includes taxes and weekday discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Tuesday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';
                }
            }

            else if (((hour >= 8) && (hour <= 17)) && ((minute >= 0) && (minute <= 59)))
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin >> minutes;
                if (minutes > 60)                                                                                                //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * tax);                                             //fee formula includes taxes and over 60 minutes discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Tuesday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';

                }
                else if (minutes <= 60) {                                                                                        //if the call is less than or equal to 60 minutes
                    fee = (0.20 * minutes * tax);                                                                               // fee formula includes no discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Tuesday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';
                }

            }
        }
        break;

        case 4: //Wednesday
        {
            cout << "Please enter time that call started. \n";
            cout << "hour  (0-23): ";
            cin >> hour;                                                                                                        //ask for the hour the call started
            cout << "minute  (0-59): ";
            cin >> minute;                                                                                                    //ask for the minute the call started
            if ( (((hour >= 0) && (hour <= 7)) || ((hour >= 18) && (hour <= 23))) && ((minute >= 0) && (minute <= 59)))      //if time is outside of the range of 8-17h
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin >> minutes;                                                                                             //duration of call in minutes
                if (minutes > 60)                                                                                           //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * weekday * tax);                              //fee formula includes tax; weekday and after 60 mins discount
                    cout << "\n The price for the long distance call originating on";
                    cout << " Wednesday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';

                }
                else if (minutes <= 60)                                                                                     //if the call is less than or equal to 60 minutes
                {
                    fee = (0.20 * minutes * weekday * tax);                                                                    // fee formula includes taxes and weekday discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Wednesday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';
                }
            }

            else if (((hour >= 8) && (hour <= 17)) && ((minute >= 0) && (minute <= 59)))
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin >> minutes;
                if (minutes > 60)                                                                                                //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * tax);                                             //fee formula includes taxes and over 60 minutes discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Wednesday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';

                }
                else if (minutes <= 60) {                                                                                        //if the call is less than or equal to 60 minutes
                    fee = (0.20 * minutes * tax);                                                                               // fee formula includes no discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Wednesday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';
                }

            }
        }
            break;

        case 5: //Thursday
        {
            cout << "Please enter time that call started. \n";
            cout << "hour  (0-23): ";
            cin >> hour;                                                                                                        //ask for the hour the call started
            cout << "minute  (0-59): ";
            cin >> minute;                                                                                                    //ask for the minute the call started
            if ( (((hour >= 0) && (hour <= 7)) || ((hour >= 18) && (hour <= 23))) && ((minute >= 0) && (minute <= 59)))      //if time is outside of the range of 8-17h
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin >> minutes;                                                                                             //duration of call in minutes
                if (minutes > 60)                                                                                           //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * weekday * tax);                              //fee formula includes tax; weekday and after 60 mins discount
                    cout << "\n The price for the long distance call originating on";
                    cout << " Thursday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';

                }
                else if (minutes <= 60)                                                                                     //if the call is less than or equal to 60 minutes
                {
                    fee = (0.20 * minutes * weekday * tax);                                                                    // fee formula includes taxes and weekday discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Thursday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';
                }
            }

            else if (((hour >= 8) && (hour <= 17)) && ((minute >= 0) && (minute <= 59)))
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin >> minutes;
                if (minutes > 60)                                                                                                //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * tax);                                             //fee formula includes taxes and over 60 minutes discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Thursday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';

                }
                else if (minutes <= 60) {                                                                                        //if the call is less than or equal to 60 minutes
                    fee = (0.20 * minutes * tax);                                                                               // fee formula includes no discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Thursday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';
                }

            }
        }
            break;

        case 6: //Friday
        {
            cout << "Please enter time that call started. \n";
            cout << "hour  (0-23): ";
            cin >> hour;                                                                                                        //ask for the hour the call started
            cout << "minute  (0-59): ";
            cin >> minute;                                                                                                    //ask for the minute the call started
            if ( (((hour >= 0) && (hour <= 7)) || ((hour >= 18) && (hour <= 23))) && ((minute >= 0) && (minute <= 59)))      //if time is outside of the range of 8-17h
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin >> minutes;                                                                                             //duration of call in minutes
                if (minutes > 60)                                                                                           //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * weekday * tax);                              //fee formula includes tax; weekday and after 60 mins discount
                    cout << "\n The price for the long distance call originating on";
                    cout << " Friday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';

                }
                else if (minutes <= 60)                                                                                     //if the call is less than or equal to 60 minutes
                {
                    fee = (0.20 * minutes * weekday * tax);                                                                    // fee formula includes taxes and weekday discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Friday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';
                }
            }

            else if (((hour >= 8) && (hour <= 17)) && ((minute >= 0) && (minute <= 59)))
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin >> minutes;
                if (minutes > 60)                                                                                                //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * tax);                                             //fee formula includes taxes and over 60 minutes discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Friday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';

                }
                else if (minutes <= 60) {                                                                                        //if the call is less than or equal to 60 minutes
                    fee = (0.20 * minutes * tax);                                                                               // fee formula includes no discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Friday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee << '\n';
                }

            }
        }
            break;

        case 1: //Sunday
        {
            cout << "Please enter time that call started. \n";
            cout << "hour  (0-23): ";
            cin
                    >> hour;                                                                                                        //ask for the hour the call started
            cout << "minute  (0-59): ";
            cin
                    >> minute;                                                                                                    //ask for the minute the call started
            if ((((hour >= 0) && (hour <= 23))) && ((minute >= 0) && (minute <=
                                                                      59)))                                       //if time is outside of the range of 8-17h
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin
                        >> minutes;                                                                                             //duration of call in minutes
                if (minutes > 60)                                                                                           //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * weekend *
                           tax);                              //fee formula includes tax; weekend and after 60 mins discount
                    cout << "\n The price for the long distance call originating on";
                    cout << " Sunday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee
                         << '\n';

                } else if (minutes <=
                           60)                                                                                     //if the call is less than or equal to 60 minutes
                {
                    fee = (0.20 * minutes * weekend *
                           tax);                                                                    // fee formula includes taxes and weekend discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Sunday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee
                         << '\n';
                }
            }

        }
            break;

        case 7:
        {
            cout << "Please enter time that call started. \n";
            cout << "hour  (0-23): ";
            cin
                    >> hour;                                                                                                        //ask for the hour the call started
            cout << "minute  (0-59): ";
            cin
                    >> minute;                                                                                                    //ask for the minute the call started
            if ((((hour >= 0) && (hour <= 23))) && ((minute >= 0) && (minute <=
                                                                      59)))                                       //if time is outside of the range of 8-17h
            {
                cout << "Please enter the duration of the call. \n";
                cout << "minutes: ";
                cin
                        >> minutes;                                                                                             //duration of call in minutes
                if (minutes >
                    60)                                                                                           //if the call is greater than 60 minutes
                {
                    fee = (((0.20 * 60) + (20 * (minutes - 60) * hour_disc)) * weekend *
                           tax);                              //fee formula includes tax; weekend and after 60 mins discount
                    cout << "\n The price for the long distance call originating on";
                    cout << " Saturday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee
                         << '\n';

                } else if (minutes <=
                           60)                                                                                     //if the call is less than or equal to 60 minutes
                {
                    fee = (0.20 * minutes * weekend *
                           tax);                                                                    // fee formula includes taxes and weekend discount.
                    cout << "\n The price for the long distance call originating on";
                    cout << " Saturday at " << hour << ":" << setw(2) << setfill('0') << minute << " is $ " << setprecision(2) << fixed << fee
                         << '\n';
                }
            }

        }

        break;


        default: //any other input that is not between 1-7
            {
            cout << "\n !!!!date is invalid, please rerun the program!!!! \n";
        }
        break;
    }
    cout <<"\n ........................... \n end of program. If you did not receive your total fee, please check your values input \n ...........................";
}