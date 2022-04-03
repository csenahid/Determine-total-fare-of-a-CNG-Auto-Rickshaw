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
