//program to diplay restaurant billing 

#include <stdio.h>

int main(){
	int n, qty;
	char name[20];
	 float price;
	 float total;
	 float grandtotal;
	 float VAT;
	 float discount=0;
	 float finalBill;
	 
	 printf("Enter numbr of dishes: ");
	 scanf("%d", &n);
	 
	 for( int i=1; i<=n; i++){
	 printf("Enter dish %d name: ", i);
	 scanf("%s", name);
	 printf("Enter quantity: ");
	 scanf("%d", &qty);
	 printf("Enter price per plate: ");
	 scanf("%f", &price);
	 
	 total = qty * price;
	 printf("Total for %s = %.2f\n",name, total);
	 grandtotal +=total;
	 printf("Grand Total = %.2f\n", grandtotal);
	 }
	
	 VAT = grandtotal * 0.16;
	 finalBill = grandtotal + VAT;
	 
	 if(grandtotal > 10000){
	 discount = grandtotal * 0.05;
	 finalBill -= discount;
	 printf("\n--- FULL RECEIPT --\n");
	 printf("Discount 5%%: %.2f\n", discount);
	 printf("VAT 16%%: %.2f\n", VAT); 
	 }	 
	 
	return 0;
}