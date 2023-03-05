#include<iostream.h>
#include<conio.h>
void main()
{
int r=1,c=1;
clrscr();
for(r=1;r<=5;r++)
{
for(c=1;c<=5;c++)
{
if((r==2 && c==1)||(r==2 && c==2)||(r==2 && c==4)||(r==2 && c==5)||
(r==3 && c==1)||(r==3 && c==2)||(r==3 && c==4)||(r==3 && c==5)||
(r==4 && c==1)||(r==4 && c==2)||(r==4 && c==4)||(r==4 && c==5)||
(r==5 && c==1)||(r==5 && c==2)||(r==5 && c==4)||(r==5 && c==5))
{
cout<<"   ";
}
else
{
cout<<" * ";
}
}
cout<<endl;
}
getch();
}