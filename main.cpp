#include<bits/stdc++.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#define endl "\n"
using namespace std;




class Profile               // Stores info on user             
{ 
    string name;
    int high_score;
    int score;
    int que_correct;
    int que_wrong;
    int skipped;
    int time_out;
    

    public:            
    Profile()                                       //Profile Creation
    {
        system("cls");
        score=0;
        cout<<"\t\t\t\tEnter your name: ";
        cin>>name;
         cout<<"\n\n\t\t\t\tProfile Created";
         cout<<"\n\n\t\t\t\t**PRESS ANY KEY TO DISPLAY QUESTIONS**";
         _getch();

    }

    friend void output(Profile&);                 
    void save_data(int *arr)                    // Stores the data is profile class
    {
         this->score=arr[0];
         this->que_correct=arr[1];
         this->que_wrong=arr[2];
         this->skipped=arr[3];
         this->time_out=arr[4];
         ofstream fout("Game.txt");
         fout<<"Saved Data\n\n";
         fout<<"Name = "<<name;
         fout<<"\nScore = "<<score;
         fout<<"\nQuestion attempted correctly = "<<que_correct;
         fout<<"\nQuestion attempted wrong = "<<que_wrong;
         fout<<"\nQuestions Skipped = "<<skipped;
         fout<<"\nQuestion Timed Out = "<<time_out;
         fout.close();
    }
  


};


void output(Profile& a)         // Display ScoreCard at last           
{
    system("cls");

    cout<<"\t\t\t\t\t\tYOUR RESULT"<<endl<<endl;
      cout<<"\n\t\t\t\t\tName = "<<a.name;
         cout<<"\n\t\t\t\t\tScore = "<<a.score;
         cout<<"\n\t\t\t\t\tQuestion attempted correctly = "<<a.que_correct;
         cout<<"\n\t\t\t\t\tQuestion attempted wrong = "<<a.que_wrong;
         cout<<"\n\t\t\t\t\tQuestions Skipped = "<<a.skipped;
         cout<<"\n\t\t\t\t\tQuestion Timed Out = "<<a.time_out;

        
         _getch();
}

void Instruction()        // Instruction page                    
  {
   system("cls");
    cout<<"\t\t\t\t\t\t**BASIC RULES AND INSTRUCTIONS**\n";
    cout<<"\t\t-----------------------------------------------------------------------------------------------------------------------------\n\n";
   cout<<"\t\t\t\t\t1.SKIP ==> You can skip the Question by pressing Enter\n";
   cout<<"\t\t\t\t\t2.10 Points will be awarded for correct answer and -2 will be given for wrong question\n";
   cout<<"\t\t\t\t\t3.No points will be given if you skip the question or Your time is up\n";
   cout<<"\t\t\t\t\t4.Player have to answer every question with 30 secs\n";
   cout<<"\t\t\t\t\t5. Timer will be displayed at the top of the screen\n";
   cout<<"\t\t\t\t\t6. Score will also be displayed after attempting every question\n";
   cout<<"\t\t\t\t\t7. Questions will be based on the concepts of OOP.\n";
   cout<<"\t\t\t\t\t8. Player have to answer 10 questions and accordingly result will be displayed after complete quiz is attempted.\n";

   cout<<"\n\t\t\t\t\t\t**PRESS ANY KEY TO GO TO MAIN PAGE**";
   _getch();
   
   return;
}

int*  random(int *arr)                    // Generates random Number           
{
     
    srand(time(0));
  
    vector<int>check(21,-1);
    for(int i=0;i<10;i++)
    {
        int flag=1;
      do
      {
        int num;
         num=rand();
         num=num%100;
         if(num>=20)
         {
             num=num%20;
         }
         if(check[num]==-1)
         {
             arr[i]=num;
             ++check[num];
             flag=0;
         }
         


      }while(flag);  
    }
    return arr;
}

class QnA                                   // Displays Question and Answer                   
{
     public:
     
        char display_que(int n)
        {
            switch(n)
            {
                case 1:                                        // 1st question
                   cout<<"\t\t\t\t\t\t Who invented C++?\n";
                    cout<<"\t\t\t\t\t\ta) Dennis Ritchie\n";
                    cout<<"\t\t\t\t\t\tb) Ken Thompson\n";
                    cout<<"\t\t\t\t\t\tc) Brian Kernighan\n";
                    cout<<"\t\t\t\t\t\td) Bjarne Stroustrup\n";
                   return 'd';
                   break;
                case 2:                                          // 2nd question
                   cout<<"\t\t\t\t\t\tWhat is C++?\n";
                    cout<<"\t\t\t\t\t\ta) C++ is an object oriented programming language\n";
                    cout<<"\t\t\t\t\t\tb) C++ is a procedural programming language\n";
                    cout<<"\t\t\t\t\t\tc) C++ supports both procedural and object oriented programming language\n";
                    cout<<"\t\t\t\t\t\td) C++ is a functional programming language\n";
                   return 'c';
                   break;
                case 3:                                          //3rd question
                   cout<<"\t\t\t\t\t\t Which of the following is the correct syntax of including a user defined header files in C++?\n";
                    cout<<"\t\t\t\t\t\ta) #include [userdefined]\n";
                    cout<<"\t\t\t\t\t\tb) #include “userdefined”\n";
                    cout<<"\t\t\t\t\t\tc) #include <userdefined.h>\n";
                    cout<<"\t\t\t\t\t\td) #include <userdefined>\n";
                   return 'b';
                   break;
                case 4:                                       //4th question
                   cout<<" \t\t\t\t\t\tWhich of the following is used for comments in C++?\n";
                   cout<<"\t\t\t\t\t\ta) /* comment */\n";
                   cout<<"\t\t\t\t\t\tb) // comment */\n";
                   cout<<"\t\t\t\t\t\tc) // comment\n";
                   cout<<"\t\t\t\t\t\td) both // comment or /* comment */\n";
                   return 'd';
                   break;
                case 5:                                        //5th question
                   cout<<" \t\t\t\t\t\tWhich of the following user-defined header file extension used in c++?\n";
                   cout<<"\t\t\t\t\t\ta) hg\n";
                   cout<<"\t\t\t\t\t\tb) cpp\n";
                   cout<<"\t\t\t\t\t\tc) h \n";
                   cout<<"\t\t\t\t\t\td) hf\n";
                   return 'c';
                   break;
                case 6:                                     //6th question
                   cout<<" \t\t\t\t\t\tWhich of the following is a correct identifier in C++?\n";
                   cout<<"\t\t\t\t\t\ta) VAR_1234\n";
                   cout<<"\t\t\t\t\t\tb) $var_name\n";
                   cout<<"\t\t\t\t\t\tc) 7VARNAME\n";
                   cout<<"\t\t\t\t\t\td) 7var_name\n";
                   return 'a';
                   break;
                case 7:                                   // 7th question
                   cout<<" \t\t\t\t\t\tWhich of the following is not a type of Constructor in C++?\n";
                   cout<<"\t\t\t\t\t\ta) Default constructor\n";
                   cout<<"\t\t\t\t\t\tb) Parameterized constructor\n";
                   cout<<"\t\t\t\t\t\tc) Copy constructor\n";
                   cout<<"\t\t\t\t\t\td) Friend constructor\n"; 
                   return 'd';
                   break;
                case 8:                                         //8th question
                   cout<<"\t\t\t\t\t\tWhich of the following approach is used by C++?\n";
                   cout<<"\t\t\t\t\t\ta) Left-right\n";
                   cout<<"\t\t\t\t\t\tb) Right-left\n";
                   cout<<"\t\t\t\t\t\tc) Bottom-up\n";
                   cout<<"\t\t\t\t\t\td) Top-down\n";
                   return 'c';
                   break;
                case 9:                                        //9th question
                   cout<<" \t\t\t\t\t\tWhat is virtual inheritance in C++?\n";
                    cout<<"\t\t\t\t\t\ta) C++ technique to enhance multiple inheritance\n";
                    cout<<"\t\t\t\t\t\tb) C++ technique to ensure that a private member of the base class can be accessed somehow\n";
                    cout<<"\t\t\t\t\t\tc) C++ technique to avoid multiple inheritances of classes\n";
                     cout<<"\t\t\t\t\t\td) C++ technique to avoid multiple copies of the base class into children/derived class\n";
                   return 'd';
                   break;
                case 10:                                  //10th question
                   cout<<"\t\t\t\t\t\tWhat happens if the following C++ statement is compiled and executed?\n";

                    cout<<"\t\t\t\t\t\tint *ptr = NULL;\n";
                     cout<<"\t\t\t\t\t\tdelete ptr;\n";
                      cout<<"\t\t\t\t\t\ta) The program is not semantically correct\n";
                      cout<<"\t\t\t\t\t\tb) The program is compiled and executed successfully\n";
                      cout<<"\t\t\t\t\t\tc) The program gives a compile-time error\n"; 
                      cout<<"\t\t\t\t\t\td) The program compiled successfully but throws an error during run-time\n";
                   return 'b';
                   break;
                case 11:                                  //11th question
                   cout<<"\t\t\t\t\t\tWhat is the difference between delete and delete[] in C++?\n";
                    cout<<"\t\t\t\t\t\ta) delete is syntactically correct but delete[] is wrong and hence will give an error if used in any case\n";
                     cout<<"\t\t\t\t\t\tb) delete is used to delete normal objects whereas delete[] is used to pointer objects\n";
                      cout<<"\t\t\t\t\t\tc) delete is a keyword whereas delete[] is an identifier\n";
                     cout<<"\t\t\t\t\t\td) delete is used to delete single object whereas delete[] is used to multiple(array/pointer of) objects\n";
                   return 'd';
                   break;
                case 12:                                  //12th question
                   cout<<"\t\t\t\t\t\tWhich of the following is correct about this pointer in C++?\n";
                    cout<<"\t\t\t\t\t\ta) this pointer is passed as a hidden argument in all static variables of a class\n";
                    cout<<"\t\t\t\t\t\tb) this pointer is passed as a hidden argument in all the functions of a class\n";
                   cout<<"\t\t\t\t\t\tc) this pointer is passed as a hidden argument in all non-static functions of a class\n";
                    cout<<"\t\t\t\t\t\td) this pointer is passed as a hidden argument in all static functions of a class\n";
                   return 'c';
                   break;
                case 13:                               //13th question
                   cout<<"\t\t\t\t\t\tWhich of the following type is provided by C++ but not C?\n";
                   cout<<"\t\t\t\t\t\ta) double\n";
                   cout<<"\t\t\t\t\t\tb) float\n";
                     cout<<"\t\t\t\t\t\tc) int\n";
                    cout<<"\t\t\t\t\t\td) bool\n";
                   return 'd';
                   break;
                case 14:                            //14th question
                   cout<<"\t\t\t\t\t\tBy default, all the files in C++ are opened in ___ mode.\n ";
                   cout<<"\t\t\t\t\t\ta) Binary\n";
                  cout<<"\t\t\t\t\t\tb) VTC\n";
                  cout<<"\t\t\t\t\t\tc) Text\n";
                   cout<<"\t\t\t\t\t\td) ISCII\n";
                   return 'c';
                   break;
                case 15:                            //15th question
                   cout<<"\t\t\t\t\t\tWhich of the following correctly declares an array in C++?\n";
                    cout<<"\t\t\t\t\t\ta) array{10}\n";
                     cout<<"\t\t\t\t\t\tb) array array[10]\n";
                     cout<<"\t\t\t\t\t\tc) int array\n";
                     cout<<"\t\t\t\t\t\td) int array[10]\n";
                   return 'd';
                   break;
                case 16:                     //16th question
                   cout<<"\t\t\t\t\t\tWhat is the size of wchar_t in C++?\n";
                   cout<<"\t\t\t\t\t\ta) Based on the number of bits in the system\n"; 
                   cout<<"\t\t\t\t\t\tb) 2 or 4\n";
                   cout<<"\t\t\t\t\t\tc) 4\n";
                   cout<<"\t\t\t\t\t\td) 2\n";
                   return 'a';
                   break;
                case 17:                        //17th question
                   cout<<"\t\t\t\t\t\t What is the use of the indentation in c++?\n";
                  cout<<"\t\t\t\t\t\ta) r distinguishes between comments and inner data\n";
                   cout<<"\t\t\t\t\t\tb) distinguishes between comments and outer data\n";
                    cout<<"\t\t\t\t\t\tc) distinguishes between comments and code\n";
                    cout<<"\t\t\t\t\t\td) r distinguishes between comments and outer data\n";
                   return 'c';
                   break;
                case 18:                      //18th question
                   cout<<"\t\t\t\t\t\tWhich is more effective while calling the C++ functions?\n";
                   cout<<"\t\t\t\t\t\ta) call by object\n";
                   cout<<"\t\t\t\t\t\tb) call by pointer\n";
                   cout<<"\t\t\t\t\t\tc) call by value\n";
                   cout<<"\t\t\t\t\t\td) call by reference\n";
                   return 'd';
                   break;
                case 19:                     //19th question
                   cout<<"\t\t\t\t\t\tWhich keyword is used to define the macros in c++?\n ";
                  cout<<"\t\t\t\t\t\ta) #macro\n";
                   cout<<"\t\t\t\t\t\tb) #define\n";
                  cout<<"\t\t\t\t\t\tc) macro\n";
                   cout<<"\t\t\t\t\t\td) define\n";
                   return 'b';
                   break;
                case 0:                         //20th question
                   cout<<"\t\t\t\t\t\tWhich operator has highest precedence?\n";
                   cout<<"\t\t\t\t\t\ta) ()\n";
                   cout<<"\t\t\t\t\t\tb)  =\n";
                   cout<<"\t\t\t\t\t\tc) *\n";
                   cout<<"\t\t\t\t\t\td) ++\n";
                   return 'a';
                   break;
                //upto 20;
            }
        }

        

        
     ~QnA(){};    

};

class ScreenDisplay           // Main Quiz display                 
{
    int* que;                 
     double maxtime=30;           // Maximum timer

     public:
      int count=0;
      int arr[10];
      int srno=0;
      char uans,ans;          
      double duration;
     int result[5];                      // Stores scoredata
      clock_t start;
      int t=0;
      char a;
      friend int* random(int *arr);

      ScreenDisplay()                   // Constructor of class
      {
             que=random(arr);     
             for(int i=0;i<5;i++)
             {
                result[i]=0;             
             }
      }
      int* beta()
      {
        do                // Loops over 10 question
        {
           
            ++srno;
      
             start=clock();
            while(1)
            {
               system("cls");
               duration=( clock() -start) / (double) CLOCKS_PER_SEC;
       

               cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               cout<<"                                              "<<"TIME==> "<<maxtime-duration<<endl;
               cout<<"\t\t\t\t\t\tYour Score ==> "<<count<<endl;

               QnA q;
               ans=q.display_que(que[srno]);               // Core
               cout<<"\n\n\t\t\t\t\t\tPress Enter to Skip"<<endl;
               cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               cout<<"\n\n\t\t\t\t\t\tSelect Your Option ==> ";



               if(_kbhit())
               {
                   uans=_getch();
                   cout<<uans<<endl<<endl;
                   
                   if(int (uans)==13)
                   {
                      ++result[3];                                  // No. of questions we skipped                
                       cout<<"\t\t\t\t\t\tYou Skipped the question"<<endl<<endl;
                       cout<<"                          |                ______                     \n";                       
                       cout<<"                          |             /          \\                 \n";
                       cout<<"                          |                                            \n";
                       cout<<"                          |           /             \\                 \n";
                       cout<<"                 _________|________                                    \n";
                       cout<<"                          |          |                |                 \n";
                       cout<<"                          |                                            \n";
                       cout<<"                          |          \\               /                 \n";
                       cout<<"                          |                                            \n";
                       cout<<"                          |            \\  ______   /                   \n";

                   }
                   else
                   {
                       if(uans==ans)
                       {
                          ++result[1];           // No. of questions got right
                           cout<<"\t\t\t\t\t\tBINGO!!!! You Gave the correct answer\n\n";
                           count=count+10;
                            cout<<"                          |            /|                 ______                    \n";                       
                            cout<<"                          |           / |              /          \\                 \n";
                            cout<<"                          |          /  |                                             \n";
                            cout<<"                          |         /   |            /              \\                 \n";
                            cout<<"                 _________|________     |                                             \n";
                            cout<<"                          |             |           |                |                 \n";
                            cout<<"                          |             |                                             \n";
                            cout<<"                          |             |           \\               /                 \n";
                            cout<<"                          |             |                                             \n";
                            cout<<"                          |             |             \\  ______   /                   \n";

                       }
                       else
                       {
                          ++result[2];        // No.of question wronged 
                            cout<<"\t\t\t\t\t\tOOPS!!!! You Selected Wrong Option"<<endl;
                            cout<<"\t\t\t\t\t\tCorrect answer is==> "<<ans<<endl<<endl;
                            count=count-2;
                            cout<<"                                            __________          \n";                       
                            cout<<"                                           /          \\       \n";
                            cout<<"                                          |            \\      \n";
                            cout<<"                                          \\            \\   \n";
                            cout<<"                 __________________        \\           |                             \n";
                            cout<<"                                                       /           \n";
                            cout<<"                                                      /                           \n";
                            cout<<"                                                     /            \n";
                            cout<<"                                                    /                                \n";
                            cout<<"                                                   /                      \n";
                            cout<<"                                                  /                  \n";
                            cout<<"                                                 /________________   \n";
                       }
                    }
                   _getch();
                   break;
               }
               else if(duration>=maxtime)
               {
                   ++result[4];                      // No. of question got timed out
                   cout<<"\n\n\t\t\t\t\t\tSORRY!!!! Your time is up"<<endl;
                       cout<<"\t\t\t\t\t\tYou Skipped the question"<<endl<<endl;
                       cout<<"                          |                ______                     \n";                       
                       cout<<"                          |             /          \\                 \n";
                       cout<<"                          |                                            \n";
                       cout<<"                          |           /             \\                 \n";
                       cout<<"                 _________|________                                    \n";
                       cout<<"                          |          |                |                 \n";
                       cout<<"                          |                                            \n";
                       cout<<"                          |          \\               /                 \n";
                       cout<<"                          |                                            \n";
                       cout<<"                          |            \\  ______   /                   \n";                  
                   _getch();
                    break;
               }

            }
        }while(srno<10);
         result[0]=count;
         return result;
      }

};





void credits()                         
{
    system("cls");
      cout<<"\t\t\t\tMADE BY-\n";
      cout<<"\t\t\t\t AAYUSH AINCHWAR (SYCOA102)\n";
      cout<<"\t\t\t\t YASH DAHAKE (SYCOA127)\n";
      cout<<"\t\t\t\t SUJIT DEORE (SYCOA130)\n";
      cout<<"\t\t\t\t PRASAD GUNDAWAR (SYCOA153)\n";
      cout<<"\n\t\t\t\t\t\t**PRESS ANY KEY TO GO TO MAIN PAGE**";
      _getch();
      
      return;
      
}

void welcome()       // Main Menu                            
{
    while(1)
       {
           system("cls");
           cout<<"\n\n\n\t\t\t\t   __      __   ___  | |   ___    ___    _ __ ___     ___  "<<endl;
			cout<<"\t\t\t\t   \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\ "<<endl;
			cout<<"\t\t\t\t    \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/ "<<endl;
			cout<<"\t\t\t\t     \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___| "<<endl;

       cout<<"\n\n\n\t\t\t\t\t1) New Game\n\n";
       cout<<"\t\t\t\t\t2) Rules and Instruction\n\n";
       cout<<"\t\t\t\t\t3) Credit\n\n";
       cout<<"\t\t\t\t\t";
       int a;
       while(1)
       {
           a=_getch();
           if(int(a)>=49 && int(a)<=51)
             break;
       }
   
          
        if(int(a)==49)
          return;
        else if(int(a)==50)
          Instruction();    
        else if(int(a)==51)
          credits();
       
       }
        
  
}




int main()
{
    welcome();
    Profile p;
    ScreenDisplay s;
    int *result=s.beta();
    p.save_data(result);
    output(p);

     
    return 0;
}





