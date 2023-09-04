// Task
// Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

// Input Format
// There are  lines of numeric input:
// The first line has a double,  (the cost of the meal before tax and tip).
// The second line has an integer,  (the percentage of  being added as tip).
// The third line has an integer,  (the percentage of  being added as tax).

// Sample Input
// 12.00
// 20
// 8

#include<stdio.h>
int main(){
    double meal_cost;
    int tip_per;
    int tax_per;
    float total_cost=0;
    
    scanf("%lf",&meal_cost);
    scanf("%d", &tip_per);
    scanf("%d", &tax_per);
    
    total_cost = ((meal_cost*tip_per)/100)+(        (meal_cost*tax_per)/100)+meal_cost;
    
    int round_cost;
    round_cost=total_cost;
    float diff = total_cost-round_cost;
    
    if(diff>=0.5)
    {
        round_cost++;
        printf("%d",round_cost);
    }
    else{
      printf("%d",round_cost);  
    }
}
