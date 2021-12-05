#include<iostream>
#include<windows.h>
using namespace std;
main(){
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,30);
	Beep(400,1000);
	cout<<"\nMy name is AHMAD HUSSAIN\n"<<endl;
	Beep(500,1000);
	cout<<"\nMy Vu Id is BC200402805\n"<<endl;
	
//	Adding Last 3 Digit of My VU id

int a,b,c,total,iteration;
a=8;
b=0;
c=5;
iteration=0;
	Beep(600,1000);
cout<<"\nBy Adding Last 3 Digit of my VU ID, SUM IS = "<<a+b+c<<endl;
total=a+b+c;

//Using If Condition
//IF Condition Start
if(total % 2==1){
	Beep(700,1000);
cout<<"\n Sum of Last 3 digit of my Vu Id is an ODD VALUE \n"<<endl;	

//Using While Loop

while(iteration<=total){
	
	cout<<"iteration: "<<iteration<<endl;
	cout<<"My Name is AHMAD HUSSAIN\n"<<endl;
	Beep(400,1000);
	iteration++;
}

}
//IF condition END

//Else Statement with While Loop

else
{
	cout<<"\nSum is an Even Value.\n"<<endl;

 while(iteration<=total)
{
  Beep(500,1000);	
  cout<<"Iteration: "<<iteration<<endl;
  cout<<"MY VU id is bc200402805"<<endl;
  iteration++;
}

}

}

//Program Documentation:-

//1-Print your name and VU id.

//As You Say
//In First Step I Print My NAME Ahmad Hussain AND My VU id bc200402805

//2-Add last 3 digit of your VU id. 

//Then I add Last 3 Digit of my VU id.

//3-Display the result of sum on screen. 

//Then I display the Result on Screen. 

//4-Use if-else statement :: 

//a)	If sum is odd then print your name using while loop. Number of iterations of while loop should be equal to the sum. 
//b)	If sum is even then print your VU id using while loop. Number of iterations of while loop should be equal to the sum

//As you say Use If Condition and While Loop I did That same 

////Additional Work

//I Just Give a Color in Terminal Result.
//AND
//I Also Set a Beep with Different Frequencies When-each result Print on Terminal. I did it because just for the sake of Human-focus 
//REASON
//Without Beep the Result is Printed on Terminal Correctly But here is some disturbance I see When someone Compile my Program 
//Then A terminal Behaviour is not User-friendly on the Screen It Displays the Result but it Shows 25% Scroll depth not from Front to Bottom And
//This I assume this is not good for UX/UI point of view.
//That's why I add Beep with Every Step Showing on the Screen.
//Now When Someone Hit the Compile and Run The Program He Might be Seen Some Beautifull User-Centeric Wizard of My Program that's it'

//Thank You in Advance for Reading Me, If you Read, 
//Or If you find any Other Solution of this Problem Kindly Share it with me.




