#include<stdio.h>
#include<string.h>
#include "stacklib.h"  
#include "Postfix.h"
#define Val 10
void main() {
    int choice, op, num, n, c;
    float f;
    char vl;
    char In[Val];
    char Post[Val];
    
    do {
        printf("\nCHOOSE THE OPERATIONS:\n 1.Basic Operation\t 2.Infix-Postfix\t 3.Decimal-Binary\t 4.Reversal\n\n");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
            	do{
            		printf("------------------Basic-Operations---------------\n 1.Initialize\t\t2.Overflow\n 3.Push\t\t\t4.Underflow\n 5.Pop\t\t\t6.Display\n 7.Size\t\t\t8.Exit\n\n");
                     scanf("%d", &op);
                    switch (op) {
                       case 1:
                        initialize();
                        break;
                       case 2:
                         overflow();
                        break;
                       case 3:
                        printf("\nEnter the type of data for stack:\n 1-->int\t 2--> float\t 3-->char\n");
                        scanf("%d", &c);
                        if (c == 1) {
                            printf("Enter the int value to insert:\n");
                            scanf("%d", &n);
                            push_int(n);
                        } else if (c == 2) {
                            printf("Enter the float value to insert:\n");
                            scanf("%f", &f);
                            push_float(f);
                        } else {
                            printf("Enter the char value to insert:\n");
                            scanf(" %c", &vl); 
                            push_char(vl);
                        }
                        break;
                       case 4:
					   underflow(); 
                        break;
                       case 5:
                        pop();
                        break;
                       case 6:
                        display();
                        break;
                       case 7:
                        size();
                        break;
                       case 8:
                        printf("Exiting basic operations...\n");
                        break;
                       default:
                        printf("Invalid choice!\n");
                }
                
				}while(op!=8);
				break;
            case 2:
                printf("------------------Infix-Postfix---------------");
                printf("\nEnter the expression:\n");
                scanf("%s", In);  
                infix_to_postfix(In, Post); 
                printf("Postfix expression is:\n");
                puts(Post);
                break;
            
            case 3:
                printf("------------------Decimal-Binary---------------");
                printf("\nEnter the decimal number: ");
                scanf("%d", &num);
                DtoB(num);
                break;
            case 4:
            	printf("------------------Reverse-String---------------");
	            printf("\nEnter the String: ");
                scanf("%s", In);
                printf("\nReversal of stack is:\n");
            	reverse(In);
            	break;
            case 5:
                printf("Exiting...\n");
                break;
            
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);
}
