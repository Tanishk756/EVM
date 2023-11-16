void lcddata1(char *);
void lcddata(char);
//void lcd();
inti1,i11,i12,i2,i21,i22,i3,i31,i32,i4,i41,i42,i5,i51,i52,i6,i61,i62,i7,i71,i72,i8,i81,i82=0;
void main()
{ 
on=0;
P1=0;
P3=0;
while(1)
{
lcdcmd(0x38);
delay(10);
lcdcmd(0x0e) ;
delay(10);
lcdcmd(0x01);
lcdcmd(0x06) ;
delay(20) ;
if(m==1&on==0)
{
lcdcmd(0x01);
lcddata1("Authority Switch");
delay(100);
}
if(n==1)
on=1;
if(m==1&on==1)
{
if (input==0x00)
{
lcdcmd(0x01);
lcddata1("Voting Mode ");
delay(100);
}
if (input==0x01)
{
buzz=1;
while (input == 0x01);
i1=i1 + 1;
if(i1>=10)
i11=i1/10;
i12=i1%10;
on=0;
buzz=0;
//ready=0;
}
if (input==0x02)
{buzz=1;
while (input == 0x02);
{
i2=i2 + 1;
if(i2>=10)
i21=i2/10;
i22=i2%10;
on=0;
buzz=0;
}
}
if (input==0x04)
{
buzz=1;
while (input ==0x04);
{
i3=i3 + 1;
if(i3>=10)
i31=i3/10;
i32=i3%10;
on=0;
buzz=0;
}
}
if (input==0x08)
{
buzz=1;
while (input == 0x08);
{
i4=i4 + 1;
if(i4>=10)
i41=i4/10;
i42=i4%10;
on=0;
buzz=0;
}
}
if (input==0x10)
{
buzz=1;
while (input == 0x10);
{
i5=i5 + 1;
if(i5>=10)
i51=i5/10;
i52=i5%10;
i5=0;
on=0;
buzz=0;
}
}
if (input==0x20)
{
buzz=1;
while (input == 0x20);
{
i6=i6 + 1;
if(i6>=10)
i61=i6/10;
i62=i6%10;
on=0;
buzz=0;
}
}
if (input==0x40)
{
buzz=1;
while (input == 0x40);
{
i7=i7 + 1;
if(i7>=10)
i71=i7/10;
i72=i7%10;
on=0;
buzz=0;
}
}
if (input==0x80)
{
buzz=1;
while (input == 0x80);
{
i8=i8 + 1;
if(i7>=10)
i81=i8/10;
i82=i8%10;
on=0;
buzz=0;
}
}}
if(m==0)//else
{
if (input==0x01)
{
lcddata1(" CONRESS=");
lcddata(i11+0x30);
lcddata(i12+0x30);
delay(100);
}
if (input==0x02)
{
lcdcmd(0x01);
lcddata1(" BJP=");
lcddata(i21+0x30);
lcddata(i22+0x30);
delay(100);
}
if (input==0x04)
{
lcdcmd(0x01);
lcddata1(" CP(M&I)=");
lcddata(i31+0x30);
lcddata(i32+0x30);
delay(100);
}
if (input==0x08)
{
lcdcmd(0x01);
lcddata1(" TDP=");
lcddata(i41+0x30);
lcddata(i42+0x30);
delay(100);
}
if(input==0x10)
{
lcdcmd(0x10);
lcddata1(" TRS=");
lcddata(i51+0x30);
lcddata(i52+0x30);
delay(100);
}
if(input==0x20)
{
lcdcmd(0x01);
lcddata1(" PRP=");
lcddata(i61+0x30);
lcddata(i62+0x30);
delay(100);
}
if(input==0x40)
{
lcdcmd(0x01);
lcddata1(" INDEPENDANT1=");
lcddata(i71+0x30);
lcddata(i72+0x30);
delay(100);
}
if(input==0x80)
{
lcdcmd(0x01);
lcddata1(" INDEPENDANT2=");
lcddata(i81+0x30);
lcddata(i82+0x30);
delay(100);
}
else
{
lcdcmd(0x01);
lcddata1("Counting Mode ");
delay(100) ;
}}
}}
void delay(int time)
{
int i,j;
for(i=0;i<time;i++)
for(j=0;j<9000;j++);
}
void lcdcmd(char value)
{
ldata=value;
rs=0;
rw=0;
en=1;
delay(2);
en=0;
}
void lcddata1(char *value)
{
 int i;
for(i=0;value[i]!='\0';i++)
{
ldata=value[i];
rs=1;
rw=0;
en=1;
delay(1);
en=0;
}
}
void lcddata(char value)
{
ldata=value;
rs=1;
rw=0;
en=1;
delay(1);
en=0;
}










