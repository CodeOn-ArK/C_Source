#include<stdio.h>

//STRUCTURE DECLARATION
struct stores{
	char name[20];
	float price;
	int quantity;
};
struct stores update(struct stores product, float p, int q);
float mul(struct stores stock);
void display(struct stores);

int main()
{
	float p_inc, value;
	int q_inc;

	struct stores item = {"XYZ", 25.74, 12};
	/*-----------------------------------------*/
	display(item);
	/*-----------------------------------------*/
	printf("\nInput increment values:\n");
	printf("price increment and quantity increment\n");
	scanf("%f %d", &p_inc, &q_inc);
	/*-----------------------------------------*/
	item = update(item, p_inc, q_inc);
	/*-----------------------------------------*/
	printf("Updated values of item\n\n");
	printf("Name	: %s\n", item.name);
	printf("Price	: %f\n", item.price);
	printf("Quantity : %d", item.quantity);
	/*-----------------------------------------*/
	value  = mul(item);
	/*-----------------------------------------*/
	printf("\nValue of the item = %f\n", value);
	return 0;
}
void display(struct stores item)
{
	printf("\nThe data items are\n");
	printf("%s\n", item.name);
	printf("%f\n", item.price);
	printf("%d\n", item.quantity);
}

struct stores update(struct stores product, float p ,int q)
{
	product.price += p;
	product.quantity += q;
	return(product);
}

float mul(struct stores stock)
{
	return(stock.price*stock.quantity);
}
