#include<iostream>
#include<string>
using namespace std;
// Students Class
class Students{
	private:
	string name;
	string Class;
	string Rollnumber;
	string DOB;
	
	public:
		
	void addStudents()
	{
	  cout<<"name: ";
	  cin>>name;
	  cout<<"Class: ";
	  cin>>Class;
	  cout<<"Roll-number: ";
	  cin>>Rollnumber;
	  cout<<"Date of Birth: ";
	  cin>>DOB;
	  cout<<endl<<"\a"<<name<<" is Saved Successfuly!."<<endl<<endl;
	}
	
	void viewStudent()
	{
		
		cout<<"Name : "<<name<<endl;
		cout<<"Class: "<<Class<<endl;
		cout<<"R-No : "<<Rollnumber<<endl;
		cout<<"DOB  : "<<DOB<<endl;
	}
	
	void SearchStudent(string R,bool &found)
	{
		if(R==Rollnumber)
		{
			found=true;
			cout<<endl;
			cout<<"Your Search is Found: "<<endl;
			cout<<"Name: "<<name<<"  class: "<<Class;
			cout<<endl<<endl;
		}
	    
	    
	}
};

// Teacher Class

class Teachers{
	private:
	string name;
	string subject;
	string degree;
	float salary;
	
	
	
	public:
		
	void addTeacher()
	{
	  cout<<"name: ";
	  cin>>name;
	  cout<<"Subject: ";
	  cin>>subject;
	  cout<<"degree: ";
	  cin>>degree;
	  cout<<"Salary: ";
	  cin>>salary;
	  cout<<endl<<"\a"<<name<<" is Saved Successfuly!."<<endl<<endl;
	}
	
	void viewTeacher()
	{
	
		cout<<"Name : "<<name<<endl;
		cout<<"Subject: "<<subject<<endl;
		cout<<"Degree: "<<degree<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
	
	void SearchTeacher(string N,bool &found)
	{
		if(N==name)
		{
			found=true;
			cout<<endl;
			cout<<"Your Search is Found: "<<endl;
			cout<<"Name: "<<name<<"  Subject: "<<subject<<" degree: "<<degree;
			cout<<endl<<endl;
		}
	    
	    
	}
};



int main()
{
	
	
cout<<"...............................SCHOOL MANAGEMENT SYSTEM......................................"<<endl;
cout<<".................................\aWELLCOME TO MY SYSTEM......................................";
cout<<endl<<endl;

Students s[50];
Teachers t1[20];
int t=0;// this is used to show how many teacher data is saved successfully out of total 20 teachers
int c=0;// this is used to show how many Students data is saved successfully out of total 50 Students
do{

   char main_option;
   cout<<endl<<endl<<endl;
   string menu[3]={"1-Students_Menu","2-Teacher_Menu","3-Exit"};
   for(int i=0;i<3;i++)
   {
	 cout<<menu[i]<<endl;
   }
   cout<<"Enter option for main_menu: ";
   cin>>main_option;
   cout<<endl;

   if(main_option=='1')
   {
	  char option1;
      bool breaker1=false;
      
      do
      {
      	 string StudentsMenu[]={"1-Add_Student ","2-View_Students ","3-Search_Student","4-Exit"};
         for(int i=0;i<4;i++)
         {
 	        cout<<StudentsMenu[i]<<endl;
         }
      	 cout<<endl;
         cout<<"Enter option for Students management: ";
         cin>>option1;
         switch(option1)
         {
  	        case '1':
  	        s[c].addStudents();
  	        c++;
	        break;
	
	
	
	       case '2':
	       cout<<endl<<"Total Saved Students are :"<<endl<<endl;
	       for(int i=0;i<c;i++)
	       {
	       s[i].viewStudent();
	         cout<<endl<<endl;
	        }	
	       break;
	
	
	
	       case '3':
	       {
	 
	        string R;
	        bool found=false;
	        cout<<"enter Roll-number: ";
	        cin>>R;
	        for(int i=0;i<c;i++)
	        {
	  	        s[i].SearchStudent(R,found);
            }
       
            if(found==false)
            {
       	       cout<<"Sorry! your search is not found."<<endl;
	        }
	        break;
          }
   
   
         case '4':
         breaker1=true;
         break;
        }
      }while(breaker1==false);
    }


   else if(main_option=='2')
   {
	
        char option2;
        bool breaker2=false;
        
		do
        {    
		     string TeacherMenu[]={"1-Add_Teacher ","2-View_Teachers ","3-Search_Teacher","4-Exit"};
             for(int i=0;i<4;i++)
             {
 	             cout<<TeacherMenu[i]<<endl;
             } 
             cout<<endl;
             cout<<"Enter option for Teacher management: ";
             cin>>option2;
             switch(option2)
             {
  	            case '1':
  	            t1[t].addTeacher();
  	            t++;
	            break;
	
	
	
	           case '2':
	           cout<<endl<<"Total Saved Teachers are :"<<endl<<endl;
	           for(int i=0;i<t;i++)
	           {
	              t1[i].viewTeacher();
	              cout<<endl<<endl;
	           }	
	           break;
	
	
	
	          case '3':
	          {
	 
	             string N;
	             bool found=false;
	             cout<<"enter Teacher-Name: ";
	             cin>>N;
	            for(int i=0;i<t;i++)
	            {
	   	             t1[i].SearchTeacher(N,found);
                }
       
               if(found==false)
               {
       	          cout<<"Sorry! your search is not found."<<endl;
	           }
	           break;
             }
   
   
              case '4':
              breaker2=true;
              break;
  		
            }
  	
       }while(breaker2==false);
 
   }

   else
   {
   	 cout<<"\a"<<"You are Logout!!";
     return 0;
   }
}while(true);
return 0;
}
