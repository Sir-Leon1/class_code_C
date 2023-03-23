#include <stdio.h>

void full_cap(int, int, float);
void half_cap(int, int, float);

/*
 * main - Requests for the input
 *
 * Returns: Nothing
 */
int main()
{
    int no_ppl, seats;
    float trip_dis;

    printf("Enter the following info\n\tNumber of people on the trip:");
    scanf("%d", &no_ppl);
    printf("\tNumber of seats available on the van:");
    scanf("%d", &seats);
    printf("\tTrip distance(km):");
    scanf("%f", &trip_dis);

    full_cap(no_ppl, seats, trip_dis);
    half_cap(no_ppl, seats, trip_dis);

    return (0);

}


/*
 * full_cap - Finds the cost of fuel and number of trips at full capacity
 *
 * @no_ppl: The number of people to be transported
 * @seats: Number of seats available on the van
 * @trip_dis: The trip distance
 */
void full_cap(int no_ppl, int seats, float trip_dis)
{
   float ttl_dis, ttl_fuel, cst_fuel;
   int ttl_trips;

    if ((no_ppl == seats) || (no_ppl < seats))
        ttl_trips = 2;
    else
        ttl_trips = 2 * ((no_ppl / seats) + 1);

    ttl_dis = ttl_trips * trip_dis;
    ttl_fuel = ttl_dis / 8;
    cst_fuel = ttl_fuel * 180;

    printf("\nIf the van is at full capacity:\nFuel cost = %.2fsh", cst_fuel);
    printf("\nGoing for %d trips", ttl_trips); 
}


/*
 * half_cap - Calculates the amount of fuel and trips at half capacity
 *
 * @no_ppl: Number of people to be transported
 * @seats: Number of seats available in the van
 * @trip_dis: The distance of the trip
 */
void half_cap(int no_ppl, int seats, float trip_dis)
{
    float cst_fuel2, ttl_fuel2, ttl_dis2;
    int ttl_trips2;

    if ((no_ppl < seats) && (no_ppl > (seats / 2)))
        ttl_trips2 = 4;
    else if ((no_ppl < seats) && (no_ppl < (seats / 2)))
        ttl_trips2 = 2;
    else if (no_ppl == seats)
        ttl_trips2 = 3;
    else
        ttl_trips2 = 2 * ((no_ppl / ((seats / 2) - 1)));

    ttl_dis2 = ttl_trips2 * trip_dis;
    ttl_fuel2 = ttl_dis2 / 10;
    cst_fuel2 = ttl_fuel2 * 180;

    printf("\n\nIf the van is on less than half capacity:\nFuel cost = %.2fsh", cst_fuel2);
    printf("\nGoing for %d trips", ttl_trips2);
}
