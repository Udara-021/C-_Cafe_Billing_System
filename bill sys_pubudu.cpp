//PUFF AND FRESH BREAKFAST- Restaurant BILLING SYSTEM
// June 10 2016 .Powered By..Pubudu Creations# 
#include<iostream>
#include<fstream>
#include<windows.h>


using namespace std;

HANDLE hCon;
enum Color { DARKBLUE = 1,DARKGREEN,DARKTEAL,DARKRED,DARKPINK,DARKYELLOW,GRAY,DARKGRAY,BLUE,GREEN,TEAL,RED,PINK,YELLOW,WHITE };

void SetColor(Color c)                                 //SetColor function
	{if(hCon==NULL)
        hCon = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hCon, c);
	}
        

int val=0;

struct menuItemType   //struct - menuItemType
{// Declare  variables,(Global variables)
int itemNo;	
string menuItem;
double menuPrice;
int qunty;
};

 menuItemType menuList[10];
 menuItemType bill[10];
// Declare functions 
void welcomesc();
void mainmenu();
void help();
void printbill();
void showMenu();
void about();

int main()
{
	            welcomesc();

                system("PAUSE");
                return 0;
}

   void welcomesc()// welcomescreen function 
		
	    	{
		SetColor(BLUE);
	    cout<<endl;
		cout<<"\t=============================================================="<<endl<<endl;
		SetColor(GREEN);
		cout<<"\t<<<<<<<<<<<<<<<<********  WELCOME  *********>>>>>>>>>>>>>>>>>>"<<endl<<endl;
		cout<<"\t::::::::::::::::**********  TO  ************::::::::::::::::::"<<endl<<endl;
		cout<<"\t::::::::::::::::****  PUFF AND FRESH  ******::::::::::::::::::"<<endl<<endl;
		cout<<"\t<<<<<<<<<<<<<**  BREAKFAST BILLING SYSTEM  **>>>>>>>>>>>>>>>>>"<<endl<<endl;
		SetColor(BLUE);
		cout<<"\t=============================================================="<<endl<<endl;
			
	    
	   SetColor(PINK);
	   string value;// Local /Function variable

       cout<< "\t\t  Would you like buy something for breakfast.? "<<endl<<endl;
       SetColor(WHITE);
       cout<<"\t\t  Enter <Y / N>.." ;
       SetColor(RED);
	   cin>> value;
	//if condition /decision making statements..
	if (value=="Y" || value== "y")//validate choice
	   {  system ("Cls");
	    mainmenu();//call to mainmenu function
       }
	else if (value=="n" || value=="N")//validate choice
	  {
	  SetColor(RED);
	  cout << "Tankyou Come Again" <<endl;
	  exit(0);//exit system
	  }

	else 
      {SetColor(RED);
	  system ("Cls");
	  cout<<"invalid value, Try again." <<endl;
	  welcomesc();//call to welcomesc function
      }	
}

void mainmenu(){ // mainmenu function 

		int z;// Local /Function variable	
		SetColor(GREEN);
		cout<<endl;
		cout<<"\t=============================================================="<<endl<<endl;
		cout<<"\t<<<<<<<<<<<<<<<<********  WELCOME  *********>>>>>>>>>>>>>>>>>>"<<endl<<endl;
		cout<<"\t::::::::::::::::**********  TO  ************::::::::::::::::::"<<endl<<endl;
		cout<<"\t::::::::::::::::****  PUFF AND FRESH  ******::::::::::::::::::"<<endl<<endl;
		cout<<"\t<<<<<<<<<<<<<**  BREAKFAST BILLING SYSTEM  **>>>>>>>>>>>>>>>>>"<<endl<<endl;
		cout<<"\t=============================================================="<<endl<<endl;
		 SetColor(WHITE);
		cout<<"\t++++++++++++++++++++**  MAIN MENU  **+++++++++++++++++++++++++"<<endl<<endl;
		SetColor(GREEN);
		cout<<"\t=============================================================="<<endl<<endl<<endl;
			
	    SetColor(WHITE);
				cout<<"\t1.ITEMS MENU LIST"<<endl<<endl;
				cout<<"\t2.HELP"<<endl<<endl;
				cout<<"\t3.ABOUT BILLING SYSTEM"<<endl<<endl;
				cout<<"\t4.EXIT"<<endl<<endl<<endl;
				cout<<"\tEnter selected number(between 1-4):.. ";
				SetColor(RED);
	            cin>>z;
		//if condition /decision making statements.           
	if (z==1 )
	{  system ("Cls");
	   showMenu();//call to showMenu function
    }
    else if (z==2 )
	{  system ("Cls");
	   help();//call to help function
    }
    else if (z==3 )
	{  system ("Cls");
	   about();//call to about function
    }
    else if (z==4 )
	{  system ("Cls");
	   exit(0);//system exit
    }
	 
	 else 
       {SetColor(RED);
	   system ("Cls");
	   cout<<"invalid value, Try again." <<endl;
	   mainmenu();//call to mainmenu function
       }		
				
	    }

void showMenu(){// showMenu function ,items Selection
	      
	    char w='y';             
		SetColor(GREEN);
		cout<<endl;
		cout<<"\t=============================================================="<<endl<<endl;
		
		cout<<"\t::::::::::::::::***************************:::::::::::::::::::"<<endl<<endl;
		cout<<"\t::::::::::::::::****  PUFF AND FRESH  ******::::::::::::::::::"<<endl<<endl;
		cout<<"\t<<<<<<<<<<<<<**  BREAKFAST BILLING SYSTEM  **>>>>>>>>>>>>>>>>>"<<endl<<endl;
		cout<<"\t=============================================================="<<endl<<endl;
		cout<<"\t================-----------------------------================="<<endl<<endl;
		SetColor(WHITE);
		cout<<"\t++++++++++++++**  BREAKFAST ITEMS MENU LIST  **+++++++++++++++"<<endl<<endl;
		SetColor(GREEN);
		cout<<"\t=============================================================="<<endl<<endl;
		
			
	    
	                    SetColor(BLUE);
                        cout<<"\t\   ITEM NO      MENU ITEM       \t\tPRICE"<<endl<<endl;
                        cout<<"\t   ----------------------------------------------------"<<endl<<endl;
                        SetColor(WHITE);
					    cout<<"\t   111.        String Hopers     \t\tRs.65.00"<<endl;
					    cout<<"\t   112.        Egg Sandwich       \t\tRs.15.00"<<endl;
					    cout<<"\t   113.        Thosai with Chutney   \t\tRs.18.50"<<endl;
					    cout<<"\t   114.        Parata               \t\tRs.10.50"<<endl;
					    cout<<"\t   115.        Sausages Bun       \t\tRs.30.00"<<endl;
					    cout<<"\t   116.        Fish Roll          \t\tRs.25.00"<<endl;
					    cout<<"\t   117.        Plain Tea              \t\tRs.10.00"<<endl;
					    cout<<"\t   118.        Coffee               \t\tRs.15.00"<<endl;
					    cout<<"\t   119.        Tea                   \t\tRs.20.00"<<endl;
					    cout<<"\t   120.        Fruit juice           \t\tRs.22.50"<<endl<<endl;

// Initialize  variables
menuList[0].itemNo =111 ;                                   //menuList.
menuList[0].menuItem = "String Hopers "; 
menuList[0].menuPrice = 65.00;
menuList[1].itemNo =112 ;
menuList[1].menuItem = " Egg Sandwich ";
menuList[1].menuPrice = 15.00;
menuList[2].itemNo =113 ;
menuList[2].menuItem = "Thosai with Chutney";
menuList[2].menuPrice = 18.50;
menuList[3].itemNo =114 ;
menuList[3].menuItem = "Parata ";
menuList[3].menuPrice = 10.50;
menuList[4].itemNo =115 ;
menuList[4].menuItem = "Sausages Bun";
menuList[4].menuPrice = 30.00;
menuList[5].itemNo =116 ;
menuList[5].menuItem = "Fish Roll ";
menuList[5].menuPrice = 25.00;
menuList[6].itemNo =117 ;
menuList[6].menuItem = " Plain Tea ";
menuList[6].menuPrice = 10.00;
menuList[7].itemNo =118 ;
menuList[7].menuItem = "Coffee";
menuList[7].menuPrice = 15.00;
menuList[8].itemNo =119 ;
menuList[8].menuItem = "Tea";
menuList[8].menuPrice = 20.00;
menuList[9].itemNo =120 ;
menuList[9].menuItem = "Fruit juice ";
menuList[9].menuPrice = 22.50;
                 
                         while  (w=='y' || w== 'Y'){  //validate choice                // while loop ,repetition
                         	  SetColor(WHITE);                                                   
                         	  cout<<endl;                                                 //items Selection
                              cout<<"\t* From the list of food, what would you like ?.."<<endl<<endl;
                              SetColor(DARKRED);
                              
                              cout << "\t[Selections must be between < 111 - 120 >]...";      
                              SetColor(RED);
                              cin>>bill[val].itemNo ;
                              SetColor(WHITE);
                              cout<<endl;
                              cout<<"\t* Enter Selected item Quantity...";        //Enter Quantity
                              SetColor(RED);
                              cin>>bill[val].qunty;
                              val++;
                              SetColor(WHITE);
                              cout<<endl;
                              cout<<"\t* Doyou want more item ? .."<<endl<<endl;         //more item 
                              SetColor(DARKRED);
                              cout << "\t[Selections must be < Y / N > ]...";
                              SetColor(RED);
                              cin>>w; 
                              if (w=='N' || w== 'n'){//validate choice             //selection
                              system ("cls");
                              printbill();
							   
                              break;  
                                       }
                }
                        
                }
void printbill(){// printbill function 
	    SetColor(GREEN);
		cout<<endl;
		cout<<"\t=============================================================="<<endl<<endl;
	
		
		cout<<"\t::::::::::::::::****  PUFF AND FRESH  ******::::::::::::::::::"<<endl<<endl;
		cout<<"\t<<<<<<<<<<<<<**  BREAKFAST BILLING SYSTEM  **>>>>>>>>>>>>>>>>>"<<endl<<endl;
		cout<<"\t=============================================================="<<endl<<endl;
		
		SetColor(WHITE);
		cout<<"\t+++++++++++++++++++++**  YOUR BILL  **++++++++++++++++++++++++"<<endl<<endl;
		SetColor(GREEN);
		cout<<"\t=============================================================="<<endl<<endl;
			
	    SetColor(WHITE);
	    cout<<"You have ordered:\n\n";
         SetColor(BLUE);
        cout<<"      \t\QUANTITY     \t\ITEM     \t\tAMOUNT OF SALE\n"<<endl;
        cout<<"\t-------------------------------------------------------"<<endl;
	    SetColor(WHITE);
// Local /Function variables	    
double Grototal;
double tax;
double nettotal;
double cash;
     for (int count = 0; count<val; count ++){                    // for loop /,repetition
	 for (int count2 = 0; count2<10; count2++){
	 if (bill[count].itemNo == menuList[count2].itemNo){
		 bill[count].menuItem = menuList[count2].menuItem;
		 bill[count].menuPrice = menuList[count2].menuPrice;
			}
		}
	}

	 for(int temp2=0; temp2<val; temp2++ ){
		
	     cout << "\t     "<<bill[temp2].qunty <<  "\t\t" << bill[temp2].menuItem << "\t\t  Rs."<< bill[temp2].menuPrice*bill[temp2].qunty<<endl<<endl;
	Grototal+=bill[temp2].menuPrice*bill[temp2].qunty;  //Gross totel calculation
	tax=(Grototal*5)/100;         //5% TAX calculation
	nettotal=Grototal+tax;        //Nettotel calculation [Amount Due]
		
					
	}
	    cout<<"\tTax 5%      -----------------\t\t  Rs."<<tax<<endl<<endl;
	    SetColor(PINK);
	    cout<<"\tAmount Due  -----------------\t\t  Rs."<<nettotal<<endl<<endl;
	    SetColor(WHITE);
        cout << "Enter Your Cash ammount : Rs.";
        SetColor(RED);
        cin >> cash;
    double changeDue = cash - nettotal;    //Balance calculation
        cout<<endl;
        SetColor(RED);
        cout << "\tChange Due:---------------   \t\t  Rs."<< changeDue<<endl<<endl<<endl;
	    SetColor(DARKTEAL);
	    cout << "\tTankyou Come Again..Have a Nice Day.!" <<endl;
	    cout << "\tPUFF AND FRESH" <<endl;
	    cout << "\tTel : 011-0 000 000" <<endl;
	    cout << "\tCopyirght  2016  all rights reserved. Powered By Pubudu Creations#"<<endl<<endl;
	
	
	string valueB;// Local /Function variable
	    SetColor(WHITE);
	    cout<<"\t*** Enter 'Z' go B A C K :. "<<endl<<endl;
	    cout<<"If not enter any key to Exit.." ;
		SetColor(RED);
	    cin>>valueB;
	    	//if condition /decision making statements.
	if (valueB=="z" || valueB== "Z" )//validate choice
	   {system ("Cls");
	    showMenu();           //call to showmenu function
       }
	else 
      {system ("Cls");
	    exit(0);
      }		
	  }                     
	
void help()// help function 
{          
		SetColor(GREEN);
		cout<<endl;
		cout<<"\t=============================================================="<<endl<<endl;
		
	    cout<<"\t::::::::::::::::::**************************:::::::::::::::::::"<<endl<<endl;
		cout<<"\t::::::::::::::::****  PUFF AND FRESH  ******::::::::::::::::::"<<endl<<endl;
		cout<<"\t<<<<<<<<<<<<<**  BREAKFAST BILLING SYSTEM  **>>>>>>>>>>>>>>>>>"<<endl<<endl;
		cout<<"\t=============================================================="<<endl<<endl;
		cout<<"\t================-----------------------------================="<<endl<<endl;
		SetColor(WHITE);
		cout<<"\t++++++++++++++++++++++++**  HELP  **++++++++++++++++++++++++++"<<endl<<endl;
		SetColor(GREEN);
		cout<<"\t=============================================================="<<endl<<endl;
			
	    SetColor(WHITE);
	   
                
				SetColor(GREEN);
				cout<<"\n\n In Welcome screen. "<<endl;
				SetColor(WHITE);
				cout<<"\n\n 1. Enter 'y' And press Enter key, go for the main menu. "<<endl;
				SetColor(GREEN);
				cout<<"\n\n In main menu. "<<endl;
				SetColor(WHITE);
                cout<<"\n\n 2. Enter <1> and press Enter key, go for the menu list. "<<endl;
                cout<<"\n\n 3. Enter <2> and press Enter key, go for the help menu. "<<endl;
                cout<<"\n\n 4. Enter <3> and press Enter key, for exit system.  "<<endl;
                SetColor(GREEN);
                cout<<"\n\n In item menu list "<<endl;
                SetColor(WHITE);
                cout<<"\n\n 5. Enter selected item number from item menu list. And press Enter key,   "<<endl;
                cout<<"\n\n 6. Enter selected item Quantity.  "<<endl;
                cout<<"\n\n 7. Enter 'y' And press Enter key, for get more food.  "<<endl;
                cout<<"\n\n 8. IF not Enter 'n' And press Enter key,   for print bill. "<<endl;
                cout<<"\n\n 9. Enter  Your Cash ammount . "<<endl;
                cout<<"\n\n 10. Enter <z> and press Enter key, go for the Welcome screen.. "<<endl<<endl;
                SetColor(DARKTEAL);
	            
				cout << "\tPUFF AND FRESH" <<endl;
	            cout << "\tTel : 011-0 000 000" <<endl;
	            cout << "\tCopyirght  2016  all rights reserved. Powered By" ;
	            SetColor(PINK);
	            cout << "\tPubudu Creatons#" <<endl<<endl;
                SetColor(DARKTEAL);
	    string valueA;//Local / Function variable
	 
	            cout<<"\t*** Enter 'Z' go to main menu:.. ";
				SetColor(RED);
	            cin>>valueA;
	    	//if condition /decision making statements.
		if (valueA=="z" || valueA== "Z" )//validate choice
	{           system ("Cls");
	            mainmenu();//call to mainmenu function
    }
	 
	    else 
    {          SetColor(RED);
	           system ("Cls");
	           cout<<"invalid value, Try again." <<endl;
	           help();
    }				
	}

void about(){ //ABOUT SYSTEM function
    
    string line;
                                 SetColor(RED);
                                 ifstream file("Abut.txt");//NotepadText Document
                                 if(file.is_open())
                                  {
                                  while(getline(file,line))
                                  {
                                  cout<<line<<endl;
                                  }
                                   file.close();
                                  }
    string valuex;// Local /Function variable
	            SetColor(WHITE);
	            cout<<endl;
	            cout<<"\t*** Enter 'Z' go to main menu:.. ";
				SetColor(RED);
	            cin>>valuex;
	    	//if condition /decision making statements.
		if (valuex=="z" || valuex== "Z" )//validate choice
	{           system ("Cls");
	            mainmenu();//call to mainmenu function
    }
	 
	    else 
    {          	SetColor(WHITE);
	            system ("Cls");
	            cout<<"invalid value, Try again." <<endl;
	            about();//call to about function
    }				
	}
                              
                                  
