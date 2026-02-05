#include<stdio.h>
int main(){
    const int items = 50;
    const float cost_per_items = 9.101;
    float toal_cost = (float)items*cost_per_items;
    char currency = '$';
    // variable print
    printf("%d Number of itesm: \n", items);
    printf("%.2f Number of cost_per_items: \n", cost_per_items);
    printf("%.2f %c Number of currency: \n", toal_cost,currency);
    return 0;
}
