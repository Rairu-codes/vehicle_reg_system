/*
	Name: Vehicle_Registration_System.cpp
	Copyright: BSCS211A
	Author: Francis Lyle C. Belen & Cyrix Pearl Comparativo
	Date: 13/11/22 11:27
	Description: Vehicle Registration System using Functions
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

float colorchange=30;
float ownerchange=50;
float examfee=100;
float comfee=67.73;
float res=10;
char choice;
float carfee=1800;


struct vehicle{

	char regnumber[20];
	char ownername[50];
	char address[50];
	char contactnum[20];
	char platenumber[12];
	char fuel[50];
	char make[30];
	string cartype;
	char carseries[30];
	char carcolor[30];
	int yearmodel;
};

typedef vehicle car;
void addrecord(car *c);
void displayrecord(car *c);
void displayfees(car*c);
void editrecord(car *c);
void viewrecord(car *c);

int count=0;
int flag=0;

int main(){
	car reg[10];
	
	for(;;){
		system("cls");
	cout<<"\t\t\t\tV E H I C L E  R E G I S T R A T I O N  S Y S T E M"<<endl;
	cout<<"\t\t\t\t\t**********M A I N  M E N U**********"<<endl;
	cout<<"\n\t[A] ADD RECORD"<<endl;
	cout<<"\t[B] DISPLAY RECORD"<<endl;
	cout<<"\t[C] EDIT RECORD"<<endl;
	cout<<"\t[D] VIEW RECORD"<<endl;
	cout<<"\t[E] DISPLAY REGISTRATION FEES"<<endl;
	cout<<"\t[F] EXIT"<<endl;
	
	cout<<"\tChoice: ";
	choice=char(toupper(getch()));
	cout<<(choice)<<endl;
	
		if(choice=='F'){
			cout<<"\n\t\t\t\t\t===============E X I T !================"<<endl;
			exit(0);
		}
		
		else if(choice=='A'){
			if(count>=10){
			cout<<"\n\tCannot register! Record is full!"<<endl;
			continue;	
			}
				addrecord(reg);
				flag=1;	
				cout<<"\n\tPress any key to go back to the main menu...\n";
				getch();
		}
		
		else if(choice=='B'){
			if(flag == 0){
				cout<<"\n\tThere is no record to view. Press any key to go back to the main menu...\n";
				getch();
				continue;
			}
			else{	
		displayrecord(reg);
			cout<<"\n\t Press any key to go back to the main menu...\n";
			getch();
			}		
	}
		
		else if(choice=='C'){
			if(flag == 0){
				cout<<"\n\tThere is no record to edit. Press any key to go back to the main menu...\n";
				getch();
				continue;
			}
			else{
				editrecord(reg);
		}
	}

		else if(choice=='D'){
				if(flag == 0){
				cout<<"\n\tThere is no record to search. Press any key to go back to the main menu...\n";
				getch();
				continue;	
			}
				else{
			viewrecord(reg);
		}
}
		
		else if(choice=='E'){
			displayfees(reg);
			cout<<"\n\tPress any key to go back to the Main Menu..."<<endl;
		    getch();
		    continue;	
		}
}
}
void addrecord(car *c){
		for(int x = 0; x<10;x++){
				fflush(stdin);
				cout<<"\n\t==========V E H I C L E  R E G I S T R A T I O N=========="<<endl;
				cout<<"\tEnter Registration Number: ";
				gets(c->regnumber);
				cout<<"\tEnter Owner Name: ";
				gets(c->ownername);
				cout<<"\tEnter Complete Address: ";
				gets(c->address);
				cout<<"\tEnter Contact Number: ";
				gets(c->contactnum);
				cout<<"\tEnter Plate Number: ";
				cin>>(c->platenumber);
				cout<<"\tEnter Make: ";
				cin>>(c->make);
				cout<<"\tEnter Series: ";
				cin>>(c->carseries);
				cout<<"\tEnter Year Model: ";
				cin>>(c->yearmodel);
				cout<<"\tEnter Body Type: ";
				cin>>(c->cartype);	
				cout<<"\tEnter Fuel Type: ";
				cin>>(c->fuel);
				cout<<"\tEnter Color: ";
				cin>>(c->carcolor);
				
				cout<<"\n\t====================T O T A L  F E E S===================="<<endl;
				cout<<"\tLegal Research Fund:                                "<<"P"<<res<<endl;
				cout<<"\tComputer Fee:                                       "<<"P"<<comfee<<endl;
				cout<<"\tExamination Fee:                                    "<<"P"<<examfee<<endl;
				cout<<"\tPrivate motor vehicle inspection center (MVIC) fee: "<<"P"<<carfee<<endl; 
				cout<<"\tTotal Expenses:                                     "<<"P"<<(res+comfee+examfee+carfee)<<endl;
				c++;
				count++;
			}	
	}
	


void displayrecord(car *c){
			for(int x=0;x<count;x++){
				fflush(stdin);
				cout<<"\n\t==========R E G I S T E R E D  V E H I C L E =========="<<endl;
				cout<<"\tRegistration Number: "<<c->regnumber<<endl;
				cout<<"\tOwner Name: "<<c->ownername<<endl;
				cout<<"\tComplete Address: "<<c->address<<endl;
				cout<<"\tContact Number: "<<c->contactnum<<endl;
				cout<<"\tPlate Number: "<<c->platenumber<<endl;
				cout<<"\tMake: "<<c->make<<endl;
				cout<<"\tSeries: "<<c->carseries<<endl;
				cout<<"\tYear Model: "<<c->yearmodel<<endl;
				cout<<"\tBody Type: "<<c->cartype<<endl;	
				cout<<"\tFuel Type: "<<(c->fuel)<<endl;
				cout<<"\tColor: "<<c->carcolor<<endl;
			c++;
			}
		}
		
		
		
void displayfees(car *c){
	cout<<"\n\t==============================R E G I S T R A T I O N  F E E S=============================="<<endl;
	cout<<"\tPrivate motor vehicle inspection center (MVIC) fee   Vehicles   P1800 \n\t\t\t\t\t\t\t  Motorcycles   P600"<<endl;
	cout<<"\tLegal Research Fund                 				P10"<<endl;
	cout<<"\tComputer Fee                        				P67.63"<<endl;
	cout<<"\tExamination Fee                     				P100"<<endl;
	cout<<"\tRegular Vehicle License Plate       				P120"<<endl;
	cout<<"\tCost of sticker                    				P50"<<endl;
	cout<<"\tChange Classification/Chassis/Color/Engine/Tire size         	P30"<<endl;
	cout<<"\tChange Body Design 		                                P100"<<endl;
	cout<<"\tRevision of Gross Vehicle Weight   	                        P30"<<endl;
	cout<<"\tTransfer of Vehicle Ownership      	                        P50 per transfer"<<endl;
	cout<<endl;	
}

void editrecord(car *c){
	char searchid[12];
	if (flag==1){
		cout<<"\nEnter Plate Number to Edit: ";
		cin>>searchid;
		
		for(int x=0;x<10;x++){
		if(strcmp(c[x].platenumber,searchid)==0){
				cout<<"\n\t==========R E V I S I O N  O F  V E H I C L E =========="<<endl;
				cout<<"\n\tOR Number: "<<c[x].regnumber<<endl;
				cout<<"\tMake: "<<c[x].make<<endl;
				cout<<"\tSeries: "<<c[x].carseries<<endl;
				cout<<"\tYear Model: "<<c[x].yearmodel<<endl;
				cout<<"\tBody Type: "<<c[x].cartype<<endl;	
				cout<<"\tFuel: "<<c[x].fuel<<endl;
				
				cout<<"\tEnter New Owner Name: ";
				gets(c->ownername);
				cout<<"\tEnter Complete Address: ";
				gets(c->address);
				cout<<"\tEnter Contact Number: ";
				gets(c->contactnum);
				cout<<"\tEnter New Color: ";
				cin>>(c->carcolor);
				
				cout<<"\n\t====================T O T A L  F E E S===================="<<endl;
				cout<<"\tLegal Research Fund:                                "<<"P"<<res<<endl;
				cout<<"\tComputer Fee:                                       "<<"P"<<comfee<<endl;
				cout<<"\tExamination Fee:                                    "<<"P"<<examfee<<endl; 
				cout<<"\tChange Color Fee:                                       "<<"P"<<colorchange<<endl;
				cout<<"\tTransfer of Vehicle Ownership                                "<<"P"<<ownerchange<<endl;
				cout<<"\tTotal Expenses:                                     "<<"P"<<(res+comfee+examfee+carfee)<<endl;
				
			}
		c++;
		cout<<"Record successfully modified."<<endl;
		}
		if(flag==0){
			cout<<"Vehicle "<<searchid<<" does not exist."<<endl;	
		}
	}
}

void viewrecord(car *c){
	char searchid[12];
	if (flag==1){
		cout<<"\nEnter Plate Number to Search: ";
		cin>>searchid;
		
		for(int x=0;x<10;x++){
		if(strcmp(c[x].platenumber,searchid)==0){
				cout<<"\n\t==========R E G I S T E R E D  V E H I C L E =========="<<endl;
				cout<<"\n\tOR Number: "<<c[x].regnumber<<endl;
				cout<<"\tOwner Name: "<<c[x].ownername<<endl;
				cout<<"\tAddress: "<<c[x].address<<endl;
				cout<<"\tContact Number: "<<c[x].contactnum<<endl;
				cout<<"\tPlate Number: "<<c[x].platenumber<<endl;
				cout<<"\tMake: "<<c[x].make<<endl;
				cout<<"\tSeries: "<<c[x].carseries<<endl;
				cout<<"\tYear Model: "<<c[x].yearmodel<<endl;
				cout<<"\tBody Type: "<<c[x].cartype<<endl;	
				cout<<"\tColor: "<<c[x].carcolor<<endl;
				cout<<"\tFuel: "<<c[x].fuel<<endl;
			}
		c++;
		}
	if(flag==0){
			cout<<"Vehicle "<<searchid<<" does not exist."<<endl;	
		}
}
}











