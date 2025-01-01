#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define Max 30

 int postfix_top = -1;  
 char postfix_stack[Max]; 

int pri(char c) {
    if (c == '^') return 9;
    if (c == '/' || c == '*') return 7;
    if (c == '+' || c == '-') return 5;
    
}


void infix_to_postfix(char *infix, char *postfix) {
    int i,k, j = 0;
    char ch;

    for (i = 0; infix[i] != '\0'; i++) {
        ch = infix[i];
        
        
        if (isalpha(ch)) {
            postfix[j++] = ch;  
        } 
		else 
		{
            
            for (k=postfix_top ;k>=0 && pri(ch) <= pri(postfix_stack[postfix_top]);k--) {
                postfix[j++] = postfix_stack[postfix_top--];  
            }
            postfix_stack[++postfix_top] = ch;  
        }
    }

    
    while (postfix_top > -1) {
        postfix[j++] = postfix_stack[postfix_top--];
        
    }
    postfix[j] = '\0'; 

}
