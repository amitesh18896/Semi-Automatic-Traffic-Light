#include<iostream>
#include<unistd.h>
#include<windows.h>
#include<fstream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class road
{
	public:
	
		void traffic();
	    void add();
}o;
void road :: traffic()
{
	
	int p[800]={1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0};
		int q[1500]={1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0,0,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0,0,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0,0,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0,0,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0,0,1,0,1,0};
     int number[1001];
     for(int iz = 0; iz <= 1000; iz++)
      number[iz] = iz;  
      char t;
      int counter1=0;
	int i,j;
	char a[6][5000],b[6][5000];
		for(i=0;i<6;i++)
		{
			for(j=0;j<2000;j++)
			{
				if(i==0)
				{
				a[i][j]='E';	
				}
				else if(i%2!=0)
				{
				a[i][j]='-';	
				}
				else if(i%2==0 && i==2)
				{
				if(p[j]==1)
				a[i][j]='1';
				else
				a[i][j]=' ';    
			    }
			    else if(i%2==0 && i==4)
			    {
				if(number[j]%3==0 ||number[j]%5==0||number[j]%7==0)
				a[i][j]='1';
				else
				a[i][j]=' ';    
			    }
	     	}
	    }
	     	//Opposite Road Starts here
	     	B:
	     		for(i=0;i<6;i++)
		{
			for(j=0;j<3000;j++)
			{
				if(i==5)
				{
				b[i][j]='E';	
				}
				else if(i%2==0)
				{
				b[i][j]='-';	
				}
				else if(i%2!=0 && i==1)
				{	
				b[i][j]=a[2][j];   
			    }
			    else if(i%2!=0 && i==3)
			    {
				if(number[j]%3==0 ||number[j]%5==0||number[j]%7==0)
				b[i][j]='1';
				else
				b[i][j]=' ';    
			    }
	     	}
	     	}//ends here
	int k=0,l=5;
	while(5>3)
	{
		A:
		system("cls");
		    cout<<"\n\n This program is the prototype of semi-automatic switching light the light turns tored after and it becomes Red and stops the traffic\n";
		    cout<<" \"1\" represents that the car is present and the \"0\" or \" \" represents the no car is present\n";
		    cout<<" \"E\" represents the emergency lane\n";
		    cout<<" \"T,G,R\" represents the traffic light";
			cout<<"\n\n========================================================================================================================================================================\n";
	        cout<<"\n<<<<<<<<<<<<<<<<<<<<<<<<<-----------------------------------------------<<<<<<<<<<<<<<<<<<<<<<<<<------------------------------------------------<<<<<<<<<<<<<<<<<<<<<<<\n";
		for(i=0;i<6;i++)
		{
			cout<<"\t\t\t\t\t\t\t  ";
			for(j=0;j<35;j++)
		    if(i==4 || i==2)
			{
			HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<a[i][j]<<" ";//upper 1
		    }
		    else if(i==0)
		    {
		    HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<a[i][j]<<" ";//upper	2
			}
		    else
		    {
		    HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);	
			cout<<a[i][j]<<" ";	
			//cout<<a[i][j] for vaccant
			}
			cout<<"\n";
		}
			char signal[36][5];
		for(int zp=0;zp<36;zp++)
		{
			if(zp==0)
			{
				
		     	   signal[zp][0]='G';
		           counter1=counter1+1;
				   if(counter1%5==0)
				   {
				    signal[zp][0]='R';  	
				   } 
		    }
			else
			{
	        HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
			 SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY); 
			signal[zp][0]='<';
		    }
		}
		cout<<"\t\t\t\t\t\t\t";
			for(int zp=0;zp<35;zp++)
		{
			if(zp==0)
			{
				if(counter1%5!=0)
				{
             HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
			 SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<signal[zp][0]<<" ";
			    }
			    if(counter1%5==0)
				{
             HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
			 SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<signal[zp][0]<<" ";
		        }
		    }   
		    else
		    {
		     HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
			 SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY); 
			 cout<<signal[zp][0]<<" ";	
			}
		}
	    cout<<"\n";
	    for(int yu=0;yu<6;yu++)
		{
				cout<<"\t\t\t\t\t\t\t  ";
		for(int ju=0;ju<35;ju++)
		{
			if(yu==1 || yu==3)
			{
			HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_GREEN|FOREGROUND_INTENSITY);		
		cout<<b[yu][ju]<<" ";//opposite print
	         }
	         else if(yu==5)
	         {
	    HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);		
		cout<<b[yu][ju]<<" ";//opposite print
			 }
			 else
			 {
			  HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);		
		cout<<b[yu][ju]<<" ";//opposite print	
		     } 
		}
			cout<<"\n";
		}
			 HANDLE h =GetStdHandle( STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);	
		cout<<"\n>>>>>>>>>>>>>>>>>>>>>>>----------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>>>----------------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>\n";
			cout<<"\n========================================================================================================================================================================\n";
	
		for(i=0;i<6;i++)
		{
		if(i%2==0 && i!=0)
		{
		for(j=0;j<2000;j++)
		{
			a[i][j]=a[i][j+1];
	    }
		}
	    }
	    if(j==1999)
	    goto A;	
	    Sleep(200);
	    //difference
	    int count=0,ju;	
	    for(int iu=0;iu<6;iu++)
		{
		if(iu%2!=0 && iu!=5)
		{
		for(ju=3500;ju>=0;ju--)
		{
			b[iu][ju]=b[iu][ju-1];
			count++;
	    }
		}
	    }
	    if(counter1%5==0)
	    {
	    	system("pause");
		}
	    if(ju==0)
	    {	
	    goto A;	
	    }
	    Sleep(1200);
	    
	}
}
main()
{
	o.traffic();
}
