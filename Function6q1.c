#include <stdio.h>

int len_by_len(double, double, double);
int len_by_widt(double, double, double);
int len_by_heigh(double, double, double);

/*
 * Initialisation of the brick dimensions
 */
double brick_len = 4.1 * 0.025;
double brick_widt = 9.1 * 0.025;
double brick_heigh = 6.1 * 0.025;

/*
 * main - Requests the user for input and printd the results
 *
 * Return: Nothing
 */
int main()
{
    double cont_len, cont_widt, cont_heigh;
    int max_bricks, max_bricks2, max_bricks3;

    printf("Enter the following container dimensions\nLength: ");
    scanf("%f", &cont_len);
    printf("Width: ");
    scanf("%f", &cont_widt);
    printf("Height: ");
    scanf("%f", &cont_heigh);


    max_bricks = len_by_len(cont_len, cont_widt, cont_heigh);
    printf("\nIf bricks are laid\n"
            "ONLY with lenth of bricks against the\n"
            "length of the container.\n"
            "Maximum number of bricks that can be\n"
            "placed in the container is %d", max_bricks);



    max_bricks2 = len_by_widt(cont_len, cont_widt, cont_heigh);
    printf("\n\n\nIf bricks are laid\n"
            "ONLY with width of brick against the\n"
            "length of the container.\n"
            "Muximum number of bricks that can be\n"
            "placed in the container is %d", max_bricks2);



    max_bricks3 = len_by_heigh(cont_len, cont_widt, cont_heigh);
    printf("\n\n\nIf bricks are laid\n"
            "ONLY with height of bricks against the\n"
            "length of the container.\n"
            "Maximum number of bricks that can be\n"
            "placed in the container is %d", max_bricks3);

    return (0);
}


/*
 * len_by_len - Calculates the number of bricks if laid length to length.
 *
 * @len: The length of container
 * @widt: Width of container
 * @heigh: Height of container
 *
 * Return: Maximum number of bricks
 */
int len_by_len(double len, double widt, double heigh)
{
    int case_1, case_2;

    case_1 = ((len/brick_len) * (widt/brick_widt) * (heigh/brick_heigh));

    case_2 = ((len/brick_len) * (widt/brick_heigh) * (heigh/brick_widt));

    if ((case_1 > case_2) || (case_1 == case_2))
        return (case_1);
    else
        return (case_2);
    
}


/*
 * len_by_widt - Calculates the number of bricks if laid length to width
 *
 * @len: Length of container
 * @widt: Width of container
 * @heigh: Height of container
 *
 * Return: Maximum number of bricks
 */
int len_by_widt(double len, double widt, double heigh)
{
    int case_1, case_2;

    case_1 = ((len/brick_widt) * (widt/brick_len) * (heigh/brick_heigh));

    case_2 = ((len/brick_widt) * (widt/brick_heigh) * (heigh/brick_len));

    if ((case_1 > case_2) || (case_1 == case_2))
        return (case_1);
    else
        return (case_2);
}


/*
 * len_by_heigh - Calculates number of bricks if laid length to height
 *
 * @len: Length of container.
 * @widt: Width of container
 * @heigh: Height of container
 *
 * Return: Maximum number of bricks
 */
int len_by_heigh(double len, double widt, double heigh)
{
    int case_1, case_2;

    case_1 = ((len/brick_heigh) * (widt/brick_len) * (heigh/brick_widt));

    case_2 = ((len/brick_heigh) * (widt/brick_widt) * (heigh/brick_len));

    if ((case_1 > case_2) || (case_1 == case_2))
        return (case_1);
    else
        return (case_2);
}
