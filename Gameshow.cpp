/*Programmer:ThatCoder21
  Date: 2/28/14
*/

#include<iostream>
#include<string>
#include<cstdlib> 
#include<ctime> 
using namespace std;

int check(int real, int guess)
{//1
    if (real==guess)
 {//2
cout<<"Congratulations! You have won the grand prize!\n";
cout<<"Want to play again?\n";
cout<<"1. Yes\n";
cout<<"2. No \n";
int play;
cin>>play;
if(play==1)
{system("cls");
return play ;}
else 
{exit(0);}
 }//2
 else 
 {//3
  cout<<"Too bad....It was behind Door "<<real<<".\n";
  cout<<"Play again sometime and try your luck!\n";
  cout<<"Want to play again?\n";
cout<<"1. Yes\n";
cout<<"2. No \n";
int play;
cin>>play;
if(play==1)
{system("cls");
return play;}
else 
{exit(0);}
}//3
 }//1

//main
int main()
{//main
for(int loop=1;loop>0;loop++)    //loop
{ srand(time(0)); // seed random number generator 
int door= rand() % 3 +1 ; // random number    
cout<<"Welcome to the [CHOICE] gameshow!\n";
cout<<"We have here three doors and behind one\n";
cout<<"of them is 10 trillion dollars. Behind the other two...\n";
cout<<"A goat with failure at a chance at a life of luxury\n";
cout<<"So what door will you choose?\n";
cout<<"Press the number you want to open that door.\n\n";
cout<<"1. Door 1\n";
cout<<"2. Door 2\n";
cout<<"3. Door 3\n\n";
int choice;
cin>>choice;
system("CLS");  
cout<<"Door number "<<choice<<".....\n";
cout<<"Are you sure thats the one you want?\n";
    if (door == 1 && choice == 1) 
 {cout<<"I will now open a Wrong door...\n";
    cout<<"Look here! Theres a goat behind door number 3!\n";
    cout<<"Do you want to switch to door number 2?\n";
    cout<<"1. Door 1\n";
     cout<<"2. Door 2\n";
}
    if (door == 1 && choice == 2) 
    {cout<<"I will now open a Wrong door...\n";
     cout<<"Look here! Theres a goat behind door number 3!\n";
    cout<<"Do you want to switch to door number 1?\n";
    cout<<"1. Door 1\n";
     cout<<"2. Door 2\n";
     }
	if (door == 1 && choice == 3) 
  {cout<<"I will now open a Wrong door...\n";
     cout<<"Look here! Theres a goat behind door number 2!\n";
    cout<<"Do you want to switch to door number 1?\n";
    cout<<"1. Door 1\n";
     cout<<"3. Door 3\n";
}
    if (door == 2 && choice == 1) 
 { cout<<"I will now open a Wrong door...\n";
     cout<<"Look here! Theres a goat behind door number 3!\n";
    cout<<"Do you want to switch to door number 2?\n";
    cout<<"1. Door 1\n";
     cout<<"2. Door 2\n";
}
	if (door == 2 && choice == 2) 
 { cout<<"I will now open a Wrong door...\n";
     cout<<"Look here! Theres a goat behind door number 3!\n";
    cout<<"Do you want to switch to door number 1?\n";
    cout<<"1. Door 1\n";
     cout<<"2. Door 2\n";
}
	if (door == 2 && choice == 3) 
 {  cout<<"I will now open a Wrong door...\n";
     cout<<"Look here! Theres a goat behind door number 1!\n";
    cout<<"Do you want to switch to door number 2?\n";
    cout<<"2. Door 2\n";
     cout<<"3. Door 3\n";
}
	if (door == 3 && choice == 1) 
  
 {    cout<<"I will now open a Wrong door...\n";
      cout<<"Look here! Theres a goat behind door number 2!\n";
    cout<<"Do you want to switch to door number 3?\n";
    cout<<"1. Door 1\n";
     cout<<"3. Door 3\n";
}
	if (door == 3 && choice == 2) 

 {     cout<<"I will now open a Wrong door...\n";
     cout<<"Look here! Theres a goat behind door number 1!\n";
    cout<<"Do you want to switch to door number 3?\n";
    cout<<"2. Door 2\n";
     cout<<"3. Door 3\n";
}
	if (door == 3 && choice == 3) 
    
 {    cout<<"I will now open a Wrong door...\n";
     cout<<"Look here! Theres a goat behind door number 2!\n";
    cout<<"Do you want to switch to door number 1?\n";
    cout<<"1. Door 1\n";
     cout<<"3. Door 3\n";
}
cout<<"Last chance to change!\n";

cin>>choice;
check(door,choice);

}//loop close
}//main close
