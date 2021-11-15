#include <stdio.h>
int main()
{
        
	int quantity;
        double unit_price;
        char purchase_date[12];

printf("Enter iterm Number: ");
scanf("%d", &item_number);

printf("Enter Unit Price: ");
scanf("%lf", &unit_price);

printf("Enter the quantity: ");
scanf("%d", &quantity);

printf("Enteer the Purchased date (mm/dd/yyyy) : ");
scanf("%s", &purchase_date);

        printf("Item\tUnit Price\tPurchase Date\tTotal Amount\n");
        printf("%d\t$%9.2lf\t%d\t%s\t$%9.2lf\n\n", item_number, unit_price, quantity, purchase_date, unit_price * quantity);

return 0;
}
