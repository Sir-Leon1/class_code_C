#include <stdio.h>


float going(int, int, float);
float back(int, float);
int all_trips(int, int);

/*
 * main - Requests for the input
 *
 * Returns: Nothing
 */
int main()
{
    int no_ppl, seats, ttl_trips;
    float trip_dis, go, retu, go_retu;

    printf("Enter the following info\n\tNumber of people on the trip:");
    scanf("%d", &no_ppl);
    printf("\tNumber of seats available on the van:");
    scanf("%d", &seats);
    printf("\tTrip distance(km):");
    scanf("%f", &trip_dis);

    ttl_trips = all_trips(no_ppl, seats);

    if ((no_ppl < seats) && (no_ppl < (seats / 2)))
    {
        go = going(2, 10, trip_dis);
        retu = back(2, trip_dis);
    }
    else if((no_ppl == seats) || (no_ppl < seats))
    {
        go = going(2, 8, trip_dis);
        retu = back(2, trip_dis);
    }
    else
    {
        go = going(ttl_trips, 10, trip_dis);
        retu = back(ttl_trips, trip_dis);
    }

    go_retu = go + retu;
    printf("\nTotal fuel cost is %.2fsh", go_retu);

    return (0);

}


/*
 * all_trips - Calculates the total number of trips for (to and fro)
 *
 * @no_ppl: The total number of people to be transported
 * @seats: The total number of seats available in the van
 *
 * Return: The total number of trips
 */
int all_trips(int no_ppl, int seats)
{
    int ttl_trips;

    if ((no_ppl % seats) == 0)
    {
        ttl_trips = (no_ppl / seats) * 2;
        printf("\nThe total trips are %d", ttl_trips);
    }
    else
    {
        ttl_trips = 2 * ((no_ppl / seats) + 1);
        printf("\nThe total trips are %d", ttl_trips);
    }

    return (ttl_trips);

}


/*
 * going - Calculates the cost of fuel for total (to)'s
 *
 * @ttl_trips: The total number of trips the bus is going
 * @fuel_rate: The rate at which the van consumes fuel (per litre)
 * @trip_dis: The distance of the trip
 *
 * Return: The cost of fuel
 */
float going(int ttl_trips, int fuel_rate, float trip_dis)
{
   float ttl_dis, ttl_fuel, cst_fuel;

    ttl_dis = (ttl_trips / 2) * trip_dis;
    ttl_fuel = ttl_dis / fuel_rate;
    cst_fuel = ttl_fuel * 180;

    return (cst_fuel);

}


/*
 * back - The cost of fuel for total (fro)'s
 *
 * @ttl_trips: The total number of trips the bus is going
 * @trip_dis: The total trip distance
 *
 * Return: The cost of fuel
 */
float back(int ttl_trips, float trip_dis)
{
    float cst_fuel2, ttl_fuel2, ttl_dis2;

    ttl_dis2 = (ttl_trips / 2) * trip_dis;
    ttl_fuel2 = ttl_dis2 / 10;
    cst_fuel2 = ttl_fuel2 * 180;

    return (cst_fuel2);

}
