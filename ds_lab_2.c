//Design, develop and implement a program in c for following string operations
//a)Read main string(STR),a pattern string (PAT), and a replace string (REP)
//b)Perform pattern matching: Find and replace all occurences of PAT in STR with REP
//if PAT exists in STR, in case PAT doesnt exist in STR, report suitable message

#include<stdio.h>
//#include<>

char ans[100],str[100],pat[100],rep[100];
int flag,i,j,k,l,p;

void readstr(){                 //reads string
    printf("Enter the main string: \n");
    gets(str);
    printf("Enter string pattern string: \n");
    gets(pat);
    printf("Enter a replace string: \n");
    gets(rep);
}

int main(){             //main
    readstr();
    matchpattern();
    if(flag==0){
        printf("Pattern not found!!! \n");
    }
    else{
        printf("The resultant ");
    }
}

void matchpattern(){            //
    while (str[i]!='\0'){   //checking for match
        if(str[j]==pat[p]){
            p++;
            j++;
            if(pat[p]=='\0'){   //to check pattern reachs end or not
                flag=1;
                for(k=0;rep[k]!='\0';k++,l++){          //copy and replace string in ANS
                    ans[l]=rep[k];
                }
                p=0;        //if more occurence of patern
                i=j;        //next character after pattern is matched
            }
        }else  //mismatch
        {
            ans[l]=str[i];
            l++;
        }
    }   
}