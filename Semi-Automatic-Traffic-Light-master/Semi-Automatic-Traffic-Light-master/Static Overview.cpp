#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
using namespace std;
void redlight();
void greenlight();
void accident();
main()
{
	fstream fin,fout;
	char a[300][300];
	int i,j;
	int p;
	int c=0,t=0,k;
	for(i=0;i<3;i++)
	{
    for(j=0;j<20;j++)
	{
	a[i][j]='0';
	}
	}
	cout<<"\t\t\t\t\t\n\n\nThis is Road Prototype\n\n";
	cout<<"\n=========================================================================================================================\n";
	for(i=0;i<3;i++)
	{
	for(j=0;j<20;j++)
	{
	cout<<a[i][j]<<" ";
	}
	cout<<"\n=========================================================================================================================";
	cout<<"\n";
	}
	int choice;
	cout<<"\n\n Choose Layout to look After ";
	cout<<"\n\n 1 -> Red Traffic Light";
	cout<<"\n\n 2 -> Green Traffic Light";
	cout<<"\n\n 3 -> Accident Condition";
	cout<<"\n\n Your Choice : ";
	cin>>choice;
	
	
	
	
	
	
	
	
	
	switch(choice)
	{
		case 1:	
	    redlight();
        break;
        
	case 2:	
        greenlight();
        break;
    case 3:
    	accident();
    	break;
   }
}
void redlight()
{       
        char a[300][300];
	    int i,j;
        int p;
	    int c=0,t=0,k;
        system("cls");
	    cout<<"\t\t\t\t\t\n\n\n This is Traffic Red-Light Prototype\n\n";
	    cout<<"\t\t\t\t\t\n\n\n Now we have to give the 20 inputs and then we would get all the posibilities along with the accident cases and other cases\n\n";
	    for(i=0;i<3;i++)
	    {
		for(j=0;j<20;j++)
		{	
	    if(i==2)
	    {
		cout<<"\n Enter the traffic according to Red light"<<j+1<<" : ";
		cin>>p;
		if(p==1)
		a[i][j]='1';
		else if(p==0)
		a[i][j]=' ';
		else
		a[i][j]='0'; 
	    }
	    else
		a[i][j]='0';   
		}
	    }
        cout<<"\n=========================================================================================================================\n";
	    a[0][0]='R';
		for(i=0;i<3;i++)
	    {
		for(j=0;j<20;j++)
		{
		cout<<a[i][j]<<" ";
		}
		cout<<"\n==========================================================================================================================";
		cout<<"\n";
	    }
	    i=2;
	   
	A:
	    for(j=t;j<20;j++)
	    {
		if(a[i][j]=='1' && a[i][j+1]=='1')
		{
		c++;
		if(c>=5)
		{
		t=j;
		break;	
	    }
	    }
	    else if(a[i][j]=='1' && a[i][j+1]=='0')
	    {
	    c=0;
		}
	    }
		if(c>=5)
		{
		cout<<"\n\n Possibilities ";
		cout<<"\n\n 1. It's Traffic Jam due to Car no.1 got Broken\n";
		cout<<"\n\n 2. It's Traffic Jam due to an accident\n";
		cout<<"\n\n 3. The Traffic is approaching near the traffic lamp";
		c=0;
	    }
	    else if(c<=3)
	    {
	    cout<<"\n\n It's Normal Traffic\n";
		c=0;
	    }
	    if(j!=20)
	    goto A;
}



void greenlight()
{       
        char a[300][300];
	    int i,j;
        int p;
	    int c=0,t=0,k;
        system("cls");
	    cout<<"\t\t\t\t\t\n\n\n This is Traffic Green-Light Prototype\n\n";
	    cout<<"\t\t\t\t\t\n\n\n Now we have to give the 20 inputs and then we would get all the posibilities along with the accident cases and other cases\n\n";
	    for(i=0;i<3;i++)
	    {
		for(j=0;j<20;j++)
		{	
	    if(i==2)
	    {
		cout<<"\n Enter the traffic according to Red light"<<j+1<<" : ";
		cin>>p;
		if(p==1)
		a[i][j]='1';
		else if(p==0)
		a[i][j]=' ';
		else
		a[i][j]='0'; 
	    }
	    else
		a[i][j]='0';   
		}
	    }
        cout<<"\n=========================================================================================================================\n";
	    a[0][0]='G';
		for(i=0;i<3;i++)
	    {
		for(j=0;j<20;j++)
		{
		cout<<a[i][j]<<" ";
		}
		cout<<"\n==========================================================================================================================";
		cout<<"\n";
	    }
	    i=2;
	   
	A:
	    for(j=t;j<20;j++)
	    {
		if(a[i][j]=='1' && a[i][j+1]=='1')
		{
		c++;
		if(c>=5)
		{
		t=j;
		break;	
	    }
	    }
	    else if(a[i][j]=='1' && a[i][j+1]=='0')
	    {
	    c=0;
		}
	    }
		if(c>=5)
		{
		cout<<"\n\n Possibilities ";
		cout<<"\n\n 1. It's Traffic Jam due to Car no.1 got Broken\n";
		cout<<"\n\n 2. It's Traffic Jam due to an accident\n";
		cout<<"\n\n 3. The Traffic is approaching near the traffic lamp";
		c=0;
	    }
	    else if(c<=3)
	    {
	    cout<<"\n\n The light is Green and the possible reason for jam(if is there) is lack of co-ordination of drivers \n";
		c=0;
	    }
	    if(j!=20)
	    goto A;
}
void accident()
{
  char a[300][300];
	    int i,j;
        int p;
	    int c=0,t=0,k;
        system("cls");
	    cout<<"\t\t\t\t\t\n\n\n This is Traffic Accident Prototype\n\n";
	    cout<<"\t\t\t\t\t\n\n\n Now we have to give the 20 inputs and then we would get all the posibilities along with the accident cases and other cases\n\n";
	    for(i=0;i<3;i++)
	    {
		for(j=0;j<20;j++)
		{	
	    if(i==2)
	    {
		cout<<"\n Enter the traffic signals and \"1\" for cars "<<j+1<<" : ";
		cin>>p;
		if(p==1)
		a[i][j]='1';
		else if(p==0)
		a[i][j]=' ';
		else
		a[i][j]='0'; 
	    }
	    else
		a[i][j]='0';   
		}
	    }
        cout<<"\n=========================================================================================================================\n";
	    a[0][0]='T';
		for(i=0;i<3;i++)
	    {
		for(j=0;j<20;j++)
		{
		cout<<a[i][j]<<" ";
		}
		cout<<"\n==========================================================================================================================";
		cout<<"\n";
	    }
	    i=2;
	   
	A:
	    for(j=t;j<20;j++)
	    {
		if(a[i][j]==' ' && a[i][j+1]=='1')
		{
		c++;
	    }
	    }
		cout<<"\n\n Possibilities ";
		cout<<"\n\n 1. It's Traffic Jam due to Car got Broken\n";
		cout<<"\n\n 2. It's Traffic Jam due to an accident\n";
		cout<<"\n\n 3. The Traffic is approaching near the traffic lamp";
		c=0;
	    if(j!=20)
	    goto A;	
}
