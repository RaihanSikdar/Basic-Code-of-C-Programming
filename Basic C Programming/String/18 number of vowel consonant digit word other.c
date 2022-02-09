#include<stdio.h>
#include<cstring>


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	char st[25]="Raihan Sikdar@10# mamUN";
	char ch;
    
    int i,vowel,consonant,word,digit,other,smaller,capital;

    i=vowel=consonant=word=digit=other=smaller=capital=0;


    while((ch=st[i])!='\0')
    {
        if(ch>='a'&& ch<='z')
        	smaller++;
        else if(ch>='A'&& ch<='Z')
        	capital++;


    	if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'||ch=='u' || ch=='A'|| ch=='E'||ch=='I'|| ch=='O'||ch=='U')
    		vowel++;

    	else if(ch>='a'&& ch<='z' || ch>='A'&& ch<='Z' )
    		consonant++;

    	else if(ch>= '0' && ch<='9')
    		digit++;

    	else if(ch==' ')
    		word++;
    	else 
    		other++;
        i++;

    }
    word++;

    printf("vowel : %d\n",vowel);
    printf("consonant : %d\n",consonant);
    printf("capital : %d\n",capital);
    printf("smaller : %d\n",smaller);
    printf("digit : %d\n",digit);
    printf("word : %d\n",word);
    printf("other : %d\n",other);

	return 0;
}