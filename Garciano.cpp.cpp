#include<iostream>
#include<cstdlib>
#include<string>
#include<conio.h>

int mnltobatanes (float gaslevel,int distance)
{
	float gaspl;
	gaspl=658/gaslevel;
	return (gaspl);
}
int mnltopalawan (float gaslevel1,int distance1)
{
	float gaspl1;
	gaspl1=799/gaslevel1;
	return (gaspl1);
}
int mnltozambales (float gaslevel2,int distance2)
{
	float gaspl2;
	gaspl2=255/gaslevel2;
	return (gaspl2);
}
int mnltocavite (float gaslevel3,int distance3)
{
	float gaspl3;
	gaspl3=33/gaslevel3;
	return (gaspl3);
}
int mnltocamarinesnorte (float gaslevel4,int distance4)
{
	float gaspl4;
	gaspl4=368/gaslevel4;
	return (gaspl4);
}
int qctotagaytaycity (float gaslevel,int distance)
{
	float gaspl;
	gaspl=78/gaslevel;
	return (gaspl);
}
int qctobataan (float gaslevel1,int distance1)
{
	float gaspl1;
	gaspl1=123/gaslevel1;
	return (gaspl1);
}
int qctotuguegarao (float gaslevel2,int distance2)
{
	float gaspl2;
	gaspl2=479/gaslevel2;
	return (gaspl2);
}
int qctoilocossur (float gaslevel3,int distance3)
{
	float gaspl3;
	gaspl3=361/gaslevel3;
	return (gaspl3);
}
int qctoantipolo (float gaslevel4,int distance4)
{
	float gaspl4;
	gaspl4=14/gaslevel4;
	return (gaspl4);
}
int blcntonuevaecija (float gaslevel,int distance)
{
	float gaspl;
	gaspl=99/gaslevel;
	return (gaspl);
}
int blcntocabanatuan (float gaslevel1,int distance1)
{
	float gaspl1;
	gaspl1=149/gaslevel1;
	return (gaspl1);
}
int blcntotarlac (float gaslevel2,int distance2)
{
	float gaspl2;
	gaspl2=118/gaslevel2;
	return (gaspl2);
}
int blcntocagayanvalley (float gaslevel3,int distance3)
{
	float gaspl3;
	gaspl3=395/gaslevel3;
	return (gaspl3);
}
int blcntoolongapo (float gaslevel4,int distance4)
{
	float gaspl4;
	gaspl4=55/gaslevel4;
	return (gaspl4);
}
int pmpngatodagupan(float gaslevel,int distance)
{
	float gaspl;
	gaspl=159/gaslevel;
	return (gaspl);
}
int pmpngatopangasinan (float gaslevel1,int distance1)
{
	float gaspl1;
	gaspl1=154/gaslevel1;
	return (gaspl1);
}
int pmpngatolaunion (float gaslevel2,int distance2)
{
	float gaspl2;
	gaspl2=210/gaslevel2;
	return (gaspl2);
}
int pmpngatobicol (float gaslevel3,int distance3)
{
	float gaspl3;
	gaspl3=529/gaslevel3;
	return (gaspl3);
}
int pmpngatomarinduque(float gaslevel4,int distance4)
{
	float gaspl4;
	gaspl4=225/gaslevel4;
	return (gaspl4);
}
using namespace std;

int main()
{
	int choiceq;
	string username,username1;
	int password;
	int parr[30],parr1[30],SN,SN1;
	log:      //this part of the code asked the user to log in or sign up.
	cout << "\n\n\n\n\t\t\t\t\t\t WELCOME\n\t\t\t\t\t\t\t\t\t";
	cout << "\n\t\t\t[1] Log-in\n";cout << "\n\t\t\t[2] Sign-up\n";cout << "\n\t\t\t[3] Exit\n";cout <<"\n\t\t\tEnter your choice: "; cin >> choiceq;
	system("cls");
	
	if(choiceq==1){
		log1:
		cout << "\n\n\n\n\t\t\t\tLOG IN PAGE\n\n";	
		cout << "\t\t\tEnter username: "; cin >> username;
		cout << "\t\t\tEnter password: "; 
		for (int i=0; i <8; i++){
			SN=getch();			//getch means get a character
			parr[i]=SN;
			cout << "*";
		}
		if (username == username1 && SN == SN1)		//if the user register his or her password and username it will go to the main program
		{
			system("pause");
			system("CLS");
			here:
			char choice2,choice3;
			int choice;
			char Y,y,N,n;
			cout << "\n\n\n\n\t\t\t\t\t\t\t WELCOME \t\t\t\t\t\t\t\t\t\t\t\n";
			cout << "\n\t\t\t\t\t Gas Consumption rate per Kilometer\n\t\t\t\t";
			cout << "\t\t\tFrom:\n"<< endl;			//this part of the program is the list of random locations
			cout << "\t\t\t[1] Manila"<< endl;
			cout << "\t\t\t[2] Quezon City"<< endl;
			cout << "\t\t\t[3] Bulacan" << endl;	
			cout << "\t\t\t[4] Pampanga" << endl;
			cout << "\t\t\t[0] Log out"<< endl;
			cout <<"\t\t\tchoose your Location: ";
			cin >> choice;
			system("CLS");
	
			start:
			if(choice==1) //choices from manila to this 5 destination
			{
			char destination,A,a,B,b,C,c,D,d,E,e,x,X;
			cout << "\n\n\n\n\t\t\t\tTo: \t\n"<< endl;
			cout << "\t\t\t[A] Batanes" << endl;		
			cout << "\t\t\t[B] Palawan " << endl;
			cout << "\t\t\t[C] Zambales " << endl;
			cout << "\t\t\t[D] Cavite"<< endl;
			cout << "\t\t\t[E] Camarines Norte"<<endl;
			cout << "\t\t\t[X] Exit"<< endl;
			cout <<"\t\t\tChoose your Destination: ";
			cin >> destination;
			system("cls");
			switch (destination){
				//int gaslevel,distance;
				//float gaspl;
				case 'A':
				case 'a':
					system("cls");
					float gaslevel;
					int distance;
					float gaspl;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel;
					gaspl=658/gaslevel;			//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Batanes is 658 km\n";	//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl << " km/l"<<endl;
					break;
				case 'B':
				case 'b':
					system("cls");
					float gaslevel1;
					int distance1;
					float gaspl1;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel1;
					gaspl1=799/gaslevel1;		//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Palawan is 798.7 km\n";		//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl1 << " km/l"<<endl;
					break;
				case 'C':
				case 'c':
					system("cls");
					float gaslevel2;
					int distance2;
					float gaspl2;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel2;
					gaspl2=255/gaslevel2;			//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Zambales is 254.8 km\n";			//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl2 << " km/l"<<endl;
					
					break;
				case 'D':
				case 'd':
					system("cls");
					float gaslevel3;
					int distance3;
					float gaspl3;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel3;
					gaspl3=33/gaslevel3;			//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Cavite is 33.6 km \n";				//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl3 << " km/l"<<endl;
					break;
				case 'E':
				case 'e':
					system("cls");
					float gaslevel4;
					int distance4;
					float gaspl4;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel4;
					gaspl4=368/gaslevel4;			//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Camarines Norte 368.1 km\n";		//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl4 << " km/l"<<endl;
					break;	
				case 'X':
				case 'x':
					system ("cls");
					goto there;
					break;
				default:
					system("CLS");
					cout << "Invalid input. Redirecting to destination list";
					goto start;
					break;
			}
			}
			else if (choice==2) //choices from Quezon city to the given 5 destination
			{
			char destination,A,a,B,b,C,c,D,d,E,e,X,x;
			cout << "\n\n\n\n\t\t\t\tTo: \n"<< endl;
			cout << "\t\t\t[A] Tagaytay City"<< endl;
			cout << "\t\t\t[B] Bataan"<< endl;
			cout << "\t\t\t[C] Tuguegarao"<< endl;
			cout << "\t\t\t[D] Ilocos Sur"<< endl;
			cout << "\t\t\t[E] Antipolo"<< endl;
			cout << "\t\t\t[X] Exit"<< endl;
			cout <<"\t\t\tChoose your Destination: ";
			cin >> destination;
			switch (destination){
					//int gaslevel,distance;
					//float gaspl;
				case 'A':
				case 'a':
					system("cls");
					float gaslevel;
					int distance;
					float gaspl;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel;
					gaspl=78/gaslevel;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Batanes is 77.6 km\n";			//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl << " km/l"<<endl;
					break;
				case 'B':
				case 'b':
					system("cls");
					float gaslevel1;
					int distance1;
					float gaspl1;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel1;
					gaspl1=123/gaslevel1;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Palawan is 123.2 km\n";		//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl1 << " km/l"<<endl;
					break;
				case 'C':
				case 'c':
					system("cls");
					float gaslevel2;
					int distance2;
					float gaspl2;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel2;
					gaspl2=479/gaslevel2;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Zambales is 479.3 km\n";	//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl2 << " km/l"<<endl;		
					break;
				case 'D':
				case 'd':
					system("cls");
					float gaslevel3;
					int distance3;
					float gaspl3;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel3;
					gaspl3=361/gaslevel3;		//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Cavite is 360.5 km \n";		//the distance of each destination is given	
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl3 << " km/l"<<endl;
					break;
				case 'E':
				case 'e':
					system("cls");
					float gaslevel4;
					int distance4;
					float gaspl4;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel4;
					gaspl4=14/gaslevel4;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Camarines Norte 14.4 km\n";	//the distance of each destination is given	
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl4 << " km/l"<<endl;
					break;
				case 'X':
				case 'x':
					system ("cls");
					goto there;
					break;
				default:
					system ("cls");
					cout << "Invalid input. Redirecting to destination list";
					goto start;
					break;
				}
			}
			else if (choice==3)		//choices from Bulacan to the given 5 destination
			{
			char destination,A,a,B,b,C,c,D,d,E,e,X,x;
			cout << "\n\n\n\n\t\t\t\tTo: \n"<< endl;
			cout << "\t\t\t[A] Nueva Ecija"<<endl;
			cout << "\t\t\t[B] Cabanatuan"<< endl;
			cout << "\t\t\t[C] Tarlac"<< endl;
			cout << "\t\t\t[D] Cagayan Valley"<< endl;
			cout << "\t\t\t[E] olongapo"<< endl;
			cout << "\t\t\tChoose your Destination: ";
			cin >> destination;
			switch (destination){
					//int gaslevel,distance;
					//float gaspl;
				case 'A':
				case 'a':
					system("cls");
					float gaslevel;
					int distance;
					float gaspl;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel;
					gaspl=99/gaslevel;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Batanes is 99.0 km\n";	//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl << " km/l"<<endl;
					break;
				case 'B':
				case 'b':
					system("cls");
					float gaslevel1;
					int distance1;
					float gaspl1;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel1;
					gaspl1=149/gaslevel1;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Palawan is 148.9 km\n";		//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl1 << " km/l"<<endl;
					break;
				case 'C':
				case 'c':
					system("cls");
					float gaslevel2;
					int distance2;
					float gaspl2;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel2;
					gaspl2=118/gaslevel2;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Zambales is 117.9 km\n";	//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl2 << " km/l"<<endl;
					
					break;
				case 'D':
				case 'd':
					system("cls");
					float gaslevel3;
					int distance3;
					float gaspl3;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel3;
					gaspl3=395/gaslevel3; 	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Cavite is 395.5 km\n ";			//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl3 << " km/l"<<endl;
					break;
				case 'E':
				case 'e':
					system("cls");
					float gaslevel4;
					int distance4;
					float gaspl4;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel4;
					gaspl4=55/gaslevel4;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Camarines Norte 55.2 km\n";		//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl4 << " km/l"<<endl;
					break;
				case 'X':
				case 'x':
					system ("cls");
					goto there;
					break;
				default:
					system("cls");
					cout << "Invalid input. Redirecting to destination list";
					goto start;
					break;
				}
			}
			else if (choice==4)		//choices from Pampanga to the given 5 destination
			{
			char destination,A,a,B,b,C,c,D,d,E,e,X,x;
			cout << "\n\n\n\n\t\t\t\tTo: \n"<< endl;
			cout << "\t\t\t[A] Dagupan"<< endl;
			cout << "\t\t\t[B] Pangasinan"<< endl;
			cout << "\t\t\t[C] La Union"<< endl;
			cout << "\t\t\t[D] Bicol"<< endl;
			cout << "\t\t\t[E] Marinduque"<< endl;
			cout << "\t\t\t[X] Exit"<< endl;
			cout << "\t\tChoose your Destination: ";
			cin >> destination;
			switch (destination){
					//int gaslevel,distance;
					//float gaspl;
				case 'A':
				case 'a':
					system("cls");
					float gaslevel;
					int distance;
					float gaspl;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel;
					gaspl=159/gaslevel;		//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Batanes is 159.4 km\n";	//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl << " km/l"<<endl;
					break;
				case 'B':
				case 'b':
					system("cls");
					float gaslevel1;
					int distance1;
					float gaspl1;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel1;
					gaspl1=154/gaslevel1;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Palawan is 153.8 km\n";		//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl1 << " km/l"<<endl;
					break;
				case 'C':
				case 'c':
					system("cls");
					float gaslevel2;
					int distance2;
					float gaspl2;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel2;
					gaspl2=210/gaslevel2;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Zambales is 209.9 km\n";	//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl2 << " km/l"<<endl;
					
					break;
				case 'D':
				case 'd':
					system("cls");
					float gaslevel3;
					int distance3;
					float gaspl3;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel3;
					gaspl3=529/gaslevel3;		//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Cavite is 529.0 km \n";		//the distance of each destination is given	
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl3 << " km/l"<<endl;
					break;
				case 'E':
				case 'e':
					system("cls");
					float gaslevel4;
					int distance4;
					float gaspl4;
					cout << "\n\n\n\n\t\t\tWhat is the gas level of your car?\n\t\t\t\n\t\t\t\tEnter gas level of your tank in liters: ";cin >> gaslevel4;
					gaspl4=225/gaslevel4;	//it computes the distance that is given and divided to the gas level of the user
					cout << "\t\t\t\tThe distance from Manila to Camarines Norte 225 km\n";		//the distance of each destination is given
					cout << "\n\t\t\tThe gas consumption rate is " << gaspl4 << " km/l" << endl;
					break;
				case 'X':
				case 'x':
					system ("cls");
					goto there;
					break;
				default:
					system("cls");
					cout << "Invalid input. Redirecting to destination list";
					goto start;
					break;
				}
			}
			else if (choice==0)
			{
				goto log;
				return 0;
			}
			
			else {
			there:
				cout<< "\n\n\n\n\t\t\t\tInvalid Input.\a\a\a\a\a\a";  			//this program asked the user to continue if they input invalid.
				cout << "\n\t\t\t\tDo you want to continue? [Y/N]: ";
			cin >> choice3;
			system ("pause");
			system ("CLS");
			switch (choice3){
				case 'Y':			//if the user input Y,y it will go to the start or to the given choices
				case 'y':
					goto start;
					break;
				case 'N':			//if he user input N,n if will go to the main menu of the program
				case 'n':
					goto here;
					break;
				default:
					system ("cls");
					cout<< "\t\t\tInvalid Input.";
					break;
			}
			}
		cout << "\t\t\tDo you want to continue? [Y/N]: ";
		cin >> choice3;
		system ("CLS");
		switch (choice3){
			case 'Y':
			case 'y':
				goto start;
				break;
			case 'N':
			case 'n':
				goto here;
				break;
			default:
				system ("cls");
				cout<<"\t\t\tInvalid Input.";
				goto start;
				break;
		}
			cout << "\n\n\n\n\t\t\tLOGGED IN\n";
		}
	else{
		//	system("pause");
		int response;
		system("cls");
		//	system("pause");
		cout << "\n\n\n\n\t\t\tYou are not yet registered.\n\n"; //if the user are not yet registered to the program it will as the user to register
		askuser:
		cout << "\t\t\t[1]Retry?\n\t\t\t[2]Register\n\t\t\tChoice: "; cin >> response;
		switch(response)
		{
			case 1:
				system("cls");
				goto log1; //if the user is successfully register it will go to the log in system
				break;
				case 2:
				system("cls");
				goto signup; //if the user is not yet regiter if will go to the sign up system
				break;
				default:
				system("cls");
				cout << "\n\n\n\n\t\t\tInvalid input.\n\n";
				goto askuser; //if the user input invalid it will aked the user to register or retry
				break;
		}
			
				//goto log;
	}
	}
	else if(choiceq==2){
		signup:
		cout << "\n\n\n\n\t\t\t\tSIGN UP PAGE\n\n"; 		//this program shows the process of sign up system
		cout << "\t\t\tEnter username: "; cin >> username1;
		cout << "\t\t\tEnter password: "; 
		for(int t=0; t < 8; ++t)
		{
			SN1=getch();
			parr1[t]=SN1;
			cout << "*";
		}
		system ("cls");
		cout << "\n\n\n\t\t\tNew account added successfully!";
		system ("cls");
		goto log;
		}
 	else if(choiceq==3){
		system("CLS");
		cout << "\n\n\n\n\t\t\tThank you!";
		}
	else{
		system ("cls");
		cout << "\n\n\n\n\t\tInvalid input. Enter 1-3 numbers only";
		system ("cls");
		goto log;
		}
	}

		
