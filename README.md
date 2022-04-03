# Determine-total-fare-of-a-CNG-Auto-Rickshaw
Determine total fare of a CNG Auto Rickshaw ride according to the provided fare chart where the distance traveled is input through keyboard. The fair calculation also takes a one-of waiting time into consideration:

For first 05 kilometers Tk. 50/km
For next 10 kilometers Tk. 45/km
For next 30 kilometers Tk. 40/km
For waiting time above 10 Minutes an additional surcharge of 15% is added to the total
fare. (Solve using the concepts of conditional branching)

#include <stdio.h>
int main()
{
int dist, fare, time;

//reading distance
printf("\n Input distance: ");
scanf("%d", &dist);


        if (dist <= 0)
            fare = 0;
        else if (dist <= 5)
            fare = dist * 50;
        else if (dist <= 10)
            fare = dist * 45;
        else if (dist <= 30)
            fare = dist * 40;
        else if (dist > 30)
            fare = dist * 40;
//Total fare
printf("Your fare cost: %d\n", fare);
//waiting time additional 10%
printf("Enter Your Waiting Time: ");
scanf("%d", &time);

        if (time > 0)
            fare =  (fare / 10) + fare;

printf("Your Total cost: %d\n", fare);
return 0;

}
