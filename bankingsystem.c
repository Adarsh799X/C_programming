#include <stdio.h>
#include <stdlib.h>

int list();
void deposit();
void withdraw();
void transfer();
void checkDetail();
int TotalAmount = 1000, Amount, Amo, Tr;

int main() {
    while(1){
        
        switch (list()) {
        case 1:
            deposit();
            break ;
        case 2:
            withdraw();
            break;
        case 3:
            transfer();
            break;
        case 4:
            checkDetail(); 
            break;
        case 5:
            printf("\n Thank you \n");
            exit(0);
        default:
            printf("\n Invalid input \n");
	    exit(0);
    }    
}    

    return 0;
}

int list() {
    int ch;
    printf("\n 1. Deposit Amount: ");
    printf("\n 2. Withdraw Amount: ");
    printf("\n 3. Transfer Amount: ");
    printf("\n 4. Check Details: ");
    printf("\n 5. Exit: ");
    printf("\n Enter Your Choice: ");
    scanf("%d", &ch);
    return (ch);
}
void deposit() {
    printf("\n Enter the amount you want to deposit:  ");
    scanf("%d", &Amount);
    TotalAmount+=Amount;
}
void withdraw() {
    printf("\n Enter the amount you wish to withdraw: ");
    scanf("%d", &Amo);
    if (Amo <= TotalAmount){
        TotalAmount-=Amo;
    }
    else{
        printf("\n More amount withdraw is not possible");
    }
}
void transfer() {
    printf("\n Enter the amount you want to transfer: ");
    scanf("%d", &Tr);
    if (Tr <= TotalAmount){
        TotalAmount-=Tr;
    }
    else{
        printf("\n More amount transfer is not possible");
    }
}

void checkDetail() {
    printf(" \nTotal Amount = %d \n", TotalAmount);

}
