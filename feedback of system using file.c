#include <stdio.h>
int main()
{
char ch;
FILE*fp;
fp=fopen("feedback.txt","w");
if(fp==NULL)
{
    printf("file opening failed\n");
    return 0;
}
fprintf(fp,"feedback about the c programming");
fprintf(fp,"c programming is easily understandable");
fclose(fp);

fp=fopen("feedback.txt","a");

if(fp==NULL)
{
    printf("file opening failed");
    return 0;
}

fprintf(fp,"feedback about the c programmer");
fprintf(fp,"c programmer explains step by step problems");
fprintf(fp,"he revises all the previous concepts day by day before a new class");
fprintf(fp,"he explains hard problems easily and teach very simply");
fprintf(fp,"he is very friendly and a kind person");
fclose(fp);

fp=fopen("feedback.txt","r");

if(fp==NULL)
{
    printf("file opening failed\n");
    return 0;
}

while((ch=fgetc(fp))!=EOF)
{
    printf("%c",ch);
}
fclose(fp);

return 0;
}