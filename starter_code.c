#include <cs50.h>
#include <stdio.h>

float calculate_total_cost(float meal_cost, int tip_percentage);

int main(void)
{
    float meal_cost = get_float("Enter the meal cost: $");
    int tip_percentage = get_int("Enter the tip percentage: ");
    
    float total = calculate_total_cost(meal_cost, tip_percentage);
    printf("The total cost of the meal is: $%.2f\n", total);
}

float calculate_total_cost(float meal_cost, int tip_percentage)
{
    // Your code goes here
    return 0.0; // Replace this with your actual calculation
}
