#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<windows.h>
using namespace std;
void redlight();
void greenlight();
main()
{
	fstream fin,fout;
	char a[300][300];
	int i,j;
	int p;
	int c=0,t=0,k;
	for(i=0;i<5;i++)
	{
    for(j=0;j<20;j++)
	{	
	if(i==0  && j==0)
	a[i][j]='T';
	else if(i%2!=0)
	a[i][j]='-';
	else	
	a[i][j]='0';
	}
	}
	cout<<" This is the demo-prototype of our project in which the :\n 1->First row of matrix represents traffic signal\n 2->Second row of matrix represents the Emergency Lane(The Flash Lane)\n 3->The Third row is the traffic lane in one way\n T-Represents Traffic lamp\n 0-Represents Vacant Street\n 1-Represents Occupied Street\n ' '(space)-Represents no vehicle on the road";
	cout<<"\n\n\n\t\t\t\t\t\t\t\t\tThis is Road Prototype\n\n";
	cout<<"\n\t\t\t\t\t=======================================================================================\n";
	for(i=0;i<5;i++)
	{
	cout<<"\t\t\t\t\t\t\t\t";	
	for(j=0;j<20;j++)
	{
	cout<<a[i][j]<<" ";
	if(i==0 && j==19)
	cout<<"<---This lane denotes traffic signs and symbols";
	if(i==2 && j==19)
	cout<<"<---This lane denotes the emergency//flash lane";
	if(i==4 && j==19)
	cout<<"<---This lane denotes the main lane(Traffic lane)";
	}
	cout<<"\n";
	}
	cout<<"\t\t\t\t\t=======================================================================================\n";
	int choice;
	cout<<"\n\n\t\t\t\t\t\t\t\t\tChoose Layout to look After ";
	cout<<"\n\n\t\t\t\t\t\t\t\t\t1 -> Red Traffic Light";
	cout<<"\n\n\t\t\t\t\t\t\t\t\t2 -> Green Traffic Light";
	cout<<"\n\n\t\t\t\t\t\t\t\t\tYour Choice : ";
	cin>>choice;
	
	
	
	
	
	
	
	
	
	switch(choice)
	{
		case 1:	
	    redlight();
        break;
        
	    case 2:
		greenlight();
		break;	
        }
}
void redlight()
{       
        system("cls");
        char a[300][300];
	    int i,j;
        int p;
	    int c=0,t=0,k;
        
	    cout<<"\n\n\t\t\t\t\t\t\t\tThis is Traffic Red-Light Prototype\n\n";
	    for(i=0;i<5;i++)
	    {	
		for(j=0;j<20;j++)
		{	
	    if(i==4)
	    {
		cout<<"\t\t\t\t\t\t\tEnter the traffic according to Red light "<<j+1<<"     : ";
		cin>>p;
		if(p==1)
		a[i][j]='1';
		else if(p==0)
		a[i][j]=' ';
		else
		a[i][j]='0'; 
	    }
	    else
	    if(i%2!=0)
		a[i][j]='-';
		else
		a[i][j]='0';   
		}
	    }
        cout<<"\n\t\t\t\t\t=======================================================================================\n";
	    a[0][0]='R';
		for(i=0;i<5;i++)
	    {
	    cout<<"\t\t\t\t\t\t\t\t";
		for(j=0;j<20;j++)
		{
		cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	    }
	    cout<<"\n\t\t\t\t\t=======================================================================================\n";
	    i=4;
	    c=0;
	    cout<<"\n\t\t\t\t\t\t\t"<<">>"<<" Possibilities\n\n ";
	    int check_traffic=0,down_traffic=0;
	    int s=0;
	    t=0;
	    for(j=0;j<20;j++)
	    {
		if((a[i][j]==' ' || a[i][j]=='0' )&& a[i][j+1]=='1')
		{
		c++;	
		}
		if(a[i][j]=='1')
		{
		check_traffic++;	
	    }	
		}
		if(a[4][0]=='1')
		{
		cout<<"\n\t\t\t\t\t\t\t>>"<<"The Traffic Light is Red and hence Traffic would occur";	
		}
		if(c>=1)
		{
		cout<<"\n\t\t\t\t\t\t\t>>"<<"The vehicle is broken down (certain)";
		cout<<"\n\t\t\t\t\t\t\t>>"<<"There might be an accident (certain)";				
		}
		if(check_traffic<=12)
		{
		cout<<"\n\t\t\t\t\t\t\t>>"<<"This is the normal traffic for the Bengaluru";	
		}
	    cout<<"\n\n\t\tThe input Simulations can be seen that how we have anticipated it on the road as shown and on the basis of the inputs\n\n";
		cout<<"\t\tand road outputs the possibilities were drawn and were listed.For more details there are other modules since this was the \n\n";
		cout<<"\t\tRed Traffic Module so we have listed R-(that stands for Red Light) in the Traffic signal lane and since it was about Red  \n\n";
		cout<<"\t\tlight theory so we have also let that there was no emergency and the flash lane is vacant and we would discuss it in the  \n\n";
		cout<<"\t\tnext module and also this possibilities show the cause of problem along with some of the solutions of which are visible   \n\n";
		cout<<"\t\tlike EMERGENCY LANE then CIRCUITAL SOLUTION are some examples which will be discussed later in this project, A Road       \n\n";
		cout<<"\t\talong with the definations of some term is given in order to describe the above situation more clearly.  It will give the \n\n";
		cout<<"\t\trefernce diagram to above prototype";
		cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\tLAYOUT DIAGRAM\n\n";
			for(i=0;i<5;i++)
	{
    for(j=0;j<20;j++)
	{	
	if(i==0  && j==0)
	a[i][j]='T';
	else if(i%2!=0)
	a[i][j]='-';
	else	
	a[i][j]='0';
	}
	}
	cout<<" This is the demo-prototype of our project in which the :\n 1->First row of matrix represents traffic signal\n 2->Second row of matrix represents the Emergency Lane(The Flash Lane)\n 3->The Third row is the traffic lane in one way\n T-Represents Traffic lamp\n 0-Represents Vacant Street\n 1-Represents Occupied Street\n ' '(space)-Represents no vehicle on the road";
	cout<<"\n\n\n\t\t\t\t\t\t\t\t\tThis is Road Prototype\n\n";
	cout<<"\n\t\t\t\t\t=======================================================================================\n";
	for(i=0;i<5;i++)
	{
	cout<<"\t\t\t\t\t\t\t\t";	
	for(j=0;j<20;j++)
	{
	cout<<a[i][j]<<" ";
	if(i==0 && j==19)
	cout<<"<---This lane denotes traffic signs and symbols";
	if(i==2 && j==19)
	cout<<"<---This lane denotes the emergency//flash lane";
	if(i==4 && j==19)
	cout<<"<---This lane denotes the main lane(Traffic lane)";
	}
	cout<<"\n";
	}
	cout<<"\t\t\t\t\t=======================================================================================\n";
	sleep(2);		
}


void greenlight()
{
            system("cls");
        char a[300][300];
	    int i,j;
        int p;
	    int c=0,t=0,k;
        
	    cout<<"\n\n\t\t\t\t\t\t\t\tThis is Traffic Red-Light Prototype\n\n";
	    for(i=0;i<5;i++)
	    {	
		for(j=0;j<20;j++)
		{	
	    if(i==4)
	    {
		cout<<"\t\t\t\t\t\t\tEnter the traffic according to Green light "<<j+1<<"     : ";
		cin>>p;
		if(p==1)
		a[i][j]='1';
		else if(p==0)
		a[i][j]=' ';
		else
		a[i][j]='0'; 
	    }
	    else
	    if(i%2!=0)
		a[i][j]='-';
		else
		a[i][j]='0';   
		}
	    }
        cout<<"\n\t\t\t\t\t=======================================================================================\n";
	    a[0][0]='G';
		for(i=0;i<5;i++)
	    {
	    cout<<"\t\t\t\t\t\t\t\t";
		for(j=0;j<20;j++)
		{
		cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	    }
	    cout<<"\n\t\t\t\t\t=======================================================================================\n";
	    i=4;
	    c=0;
	    cout<<"\n\t\t\t\t\t\t\t"<<">>"<<" Possibilities\n\n ";
	    int check_traffic=0,down_traffic=0;
	    int s=0;
	    t=0;
	    for(j=0;j<20;j++)
	    {
		if((a[i][j]==' ' || a[i][j]=='0' )&& a[i][j+1]=='1')
		{
		c++;	
		}
		if(a[i][j]=='1')
		{
		check_traffic++;	
	    }	
		}
		if(a[4][0]=='1')
		{
		cout<<"\n\t\t\t\t\t\t\t>>"<<"This is the case of Bengaluru, Problem : Green Light but still cars are stopped at the Lane";	
		cout<<"\n\t\t\t\t\t\t\t>>"<<"The car might be broken down";	
		}
		else if(a[4][0]=='0')
		{
		cout<<"\n\t\t\t\t\t\t\t>>"<<"Normal Traffic Runnig";	
		}
		if(c>=1)
		{
		cout<<"\n\t\t\t\t\t\t\t>>"<<"The vehicle is broken down (certain)";
		cout<<"\n\t\t\t\t\t\t\t>>"<<"There might be an accident (certain)";				
		}
		if(check_traffic<=12)
		{
		cout<<"\n\t\t\t\t\t\t\t>>"<<"This is the normal traffic for the Bengaluru";	
		}
	    cout<<"\n\n\t\tThe input Simulations can be seen that how we have anticipated it on the road as shown and on the basis of the inputs\n\n";
		cout<<"\t\tand road outputs the possibilities were drawn and were listed.For more details there are other modules since this was the \n\n";
		cout<<"\t\tRed Traffic Module so we have listed R-(that stands for Red Light) in the Traffic signal lane and since it was about Red  \n\n";
		cout<<"\t\tlight theory so we have also let that there was no emergency and the flash lane is vacant and we would discuss it in the  \n\n";
		cout<<"\t\tnext module and also this possibilities show the cause of problem along with some of the solutions of which are visible   \n\n";
		cout<<"\t\tlike EMERGENCY LANE then CIRCUITAL SOLUTION are some examples which will be discussed later in this project, A Road       \n\n";
		cout<<"\t\talong with the definations of some term is given in order to describe the above situation more clearly.  It will give the \n\n";
		cout<<"\t\trefernce diagram to above prototype";
		cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\tLAYOUT DIAGRAM\n\n";
	for(i=0;i<5;i++)
	{
    for(j=0;j<20;j++)
	{	
	if(i==0  && j==0)
	a[i][j]='T';
	else if(i%2!=0)
	a[i][j]='-';
	else	
	a[i][j]='0';
	}
	}
	cout<<" This is the demo-prototype of our project in which the :\n 1->First row of matrix represents traffic signal\n 2->Second row of matrix represents the Emergency Lane(The Flash Lane)\n 3->The Third row is the traffic lane in one way\n T-Represents Traffic lamp\n 0-Represents Vacant Street\n 1-Represents Occupied Street\n ' '(space)-Represents no vehicle on the road";
	cout<<"\n\n\n\t\t\t\t\t\t\t\t\tThis is Road Prototype\n\n";
	cout<<"\n\t\t\t\t\t=======================================================================================\n";
	for(i=0;i<5;i++)
	{
	cout<<"\t\t\t\t\t\t\t\t";	
	for(j=0;j<20;j++)
	{
	cout<<a[i][j]<<" ";
	if(i==0 && j==19)
	cout<<"<---This lane denotes traffic signs and symbols";
	if(i==2 && j==19)
	cout<<"<---This lane denotes the emergency//flash lane";
	if(i==4 && j==19)
	cout<<"<---This lane denotes the main lane(Traffic lane)";
	}
	cout<<"\n";
	}
	cout<<"\t\t\t\t\t=======================================================================================\n";
	sleep(2);	
}
	    
	  
