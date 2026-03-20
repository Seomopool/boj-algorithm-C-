//2026.03.03 백준4949: 균형잡힌 세상(실버4)

#include <stdio.h>
#include <string.h>


int main()
{
    char str[100000];

    char stack[100000]; //스택구현
    int top = -1; //

    int balanced = 1;

    char result[100000] = "";
    int len = 0;


    char *p;
    while (1)
    {
        p = fgets(str, sizeof(str), stdin);
        if (p==NULL) break;
        if (*p=='.') break;

        balanced = 1;
        top = -1;
        
        for (int i=0; str[i]!='.'; i++)
        {
            //왼괄호
            if (str[i]=='(')
            {
                stack[++top] = '(';
            }
            else if (str[i]=='[')
            {
                stack[++top] = '[';
            }

            //오른괄호
            if (str[i]==')')
            {
                if (top!=-1 && stack[top]=='(') top--;
                else balanced = 0;
            }
            else if (str[i]==']')
            {
                if (top!=-1 && stack[top]=='[') top--;
                else balanced = 0;
            }
            
            

            //문장의 끝 직전에 도달했을때 평가
            if (str[i+1]=='.')
            {
                len = strlen(result);
                if (balanced && top == -1)
                {
                    result[len] = 'y';
                    result[len+1] = 'e';
                    result[len+2] = 's';
                    result[len+3] = '\n';
                    result[len+4] = '\0';
                }
                else 
                {
                    result[len] = 'n';
                    result[len+1] = 'o';
                    result[len+2] = '\n';
                    result[len+3] = '\0';
                }
            }
        }
    }

    printf("%s",result);
    return 0;
}
