
#include <stdio.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        char S[10001];
        scanf("%s", S);
        int string_Length = strlen(S);
        int i=0;
        int flag=0;
        while(i < (string_Length-2))
        {
            //if any element is a vowel, and its next 2 elements are vowels, then our condition is met
            if ( S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            {
                if ( S[i+1] == 'a' || S[i+1] == 'e' || S[i+1] == 'i' || S[i+1] == 'o' || S[i+1] == 'u')
                {
                    if ( S[i+2] == 'a' || S[i+2] == 'e' || S[i+2] == 'i' || S[i+2] == 'o' || S[i+2] == 'u')
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            i++;
         }     
            
            if ( flag == 1 )
            {
                printf("Happy\n");
            }
            else
            {
                printf("Sad\n");
            }
        
    }
    return 0;
}
