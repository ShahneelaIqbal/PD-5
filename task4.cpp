#include <iostream>
using namespace std;

int calculateTime(int hoursNeeded, float days, int noOfWorkers);

main()
{
    int hoursNeeded;
    float days;
    int noOfWorkers;
    int result;
    int timeLeft;

    cout << "Hours needed for project:  ";
    cin >> hoursNeeded;
    cout << "Days that firm has:  ";
    cin >> days;
    cout << "Number of workers:  ";
    cin >> noOfWorkers;

    result = calculateTime(hoursNeeded, days, noOfWorkers);
    if (result >= 0)
    {
        cout << "Yes! " << result << " hours left" << endl;
    }
    else
    {
        result = -result;
        cout << "Not enough time! " << result << " hours needed" << endl;
    }
}

int calculateTime(int hoursNeeded, float days, int noOfWorkers)
{
    float daysOfNotWorking;
    float hoursOfWork;
    float numberOfWorkingDays;
    float timeRequired;
    int timeLeft;

    daysOfNotWorking = ((days * 10) / 100);
    numberOfWorkingDays = days - daysOfNotWorking;
    hoursOfWork = noOfWorkers * 10;
    timeRequired = numberOfWorkingDays * hoursOfWork;
    timeLeft = timeRequired - hoursNeeded;
    return timeLeft;
}
