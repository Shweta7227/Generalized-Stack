#include<stdio.h>
#include<string.h>
#define max 7

int top=-1;
int ctop=-1;
int ftop=-1;
int t=-1;
int st[max];
int stack[1000];
char cstack[1000];
float fstack[1000];

// Initialize stack
void initialize() {
    top = -1;
    ftop=-1;
    ctop=-1;
    printf("Stack is initialized\n");
}

//  overflow
void overflow() {
    if (top == max - 1) {
       printf("\nInt stack is overflow!!\n");
    }
    else {
    	 printf("\nInt stack is not overflow!!\n");
	}
    if(ftop==max-1){
    	printf("\nFloat stack is overflow!!\n");
	}
	else {
    	 printf("\nFloat stack is not overflow!!\n");
	}
	if(ctop==max-1){
		printf("\nChar stack is overflow!!\n");
	}
	else {
    	 printf("\nChar stack is not overflow!!\n");
	}
    
}

// Check for underflow
void underflow() {
      if (top == -1) {
       printf("\nInt stack is underflow!!\n");
    }else {
    	 printf("\nInt stack is not underflow!!\n");
	}
    if(ftop==-1){
    	printf("\nFloat stack is underflow!!\n");
	}
	else {
    	 printf("\nFloat stack is not underflow!!\n");
	}
	if(ctop==-1){
		printf("\nChar stack is underflow!!\n");
	}
	else {
    	 printf("\nChar stack is not underflow!!\n");
	}
}

// stack size
void size() {
//    int sz = top + 1;
    printf("\nSize of integer stack is %d\n", top+1);
    printf("\nSize of float stack is %d\n", ftop+1);
    printf("Size of char stack is %d\n", ctop+1);
}

// Push integer
void push_int(int n) {
    if (top==(max-1)) {
        printf("\nStack is full (Overflow)\n");
    } else {
        stack[++top] = n;
        
    }
}

// Push float
void push_float(float n) {
    if (ftop==(max - 1)) {
        printf("\nStack is full (Overflow)\n");
    } else {
        fstack[++ftop] = n;
        
    }
}

// Push char
void push_char(char n) {
    if (ctop==(max-1)) {
        printf("\nStack is full (Overflow)\n");
    } else {
        cstack[++ctop] = n;
        
    }
}

// Display 
void display() {
   
    
	{  // Integer
	    if(top==-1){
	    	printf("\nOPPS!!INT EMPTY STACK...\n");
		}
		else
		{  printf("\nInterger Stack elements:\n");
			int i;
			for ( i = top; i >= 0; i--) 
			{
               printf("%d\n", stack[i]);
           }
		}	
    } 
	
	{  // Float
	    if(ftop==-1){
	    	printf("\nOPPS!!FLOAT EMPTY STACK...\n");
		}  
		else
		{     printf("\n Float Stack elements:\n");
			  int i;
              for ( i = ftop; i >= 0; i--) 
			  {
                printf("%.2f\n", fstack[i]);
              }
		}
	   
    }   
	{  // Char 
	    if(ctop==-1){
	    	printf("\nOPPS!!CHAR EMPTY STACK...\n");
		} 
		else
		{
			 printf("\n Char Stack elements:\n");
			int i;
			for ( i = ctop; i >= 0; i--) 
		    {
		    	printf("%c\n", cstack[i]);
		    }
		}
    }
}

// Pop 
void pop() {
	int type;
    printf("In Which stack you want to pop:\n1-->int\t\t2-->float\t\t3-->char\n\n ");
    scanf("%d",&type);
	 
	{
        if (type == 1) { 
            if (top==-1) {
                printf("\nInteger Stack is empty\n");
            }
			else{
        	int n = stack[top--];
            printf("\nPopped: %d\n", n);
		    }
            
        } else if (type == 2) { 
		   if (ftop==-1) {
                printf("\nFloat Stack is empty\n");
            }
			else{
        	float n = fstack[ftop--];
            printf("\nPopped: %.2f\n", n);
		    }
        } else if (type == 3) { 
            if (ctop==-1) {
                printf("Char Stack is empty \n");
            }
			else{
        	char n = cstack[ctop--];
            printf("\nPopped: %c\n", n);
		    }
        }
    }
}
//decimal to binary
void DtoB(int n){
	int i;
	t=-1;
	if(n==0){
		printf("Binary form:\n");
		printf("0");
	}
	while(n>0){
		st[++t]=n%2;
		n/=2;
	}
	
	for(i=t;i>=0;i--){
		printf("%d",st[i]);
	}
}
//reverse
void reverse(char str[]){
	
	int n=strlen(str);
	char rstack[n];
	int tp=-1;
	int i;
//	initialize();
	for(i=0;i<n;i++){
		rstack[++tp]=str[i];
	}
	for(i=0;i<n;i++){
		printf("%c",str[tp--]);
	}
	printf("\n\n");
}
