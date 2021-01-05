
#include <iostream>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int static speed=0;
int static t=0;
void increasespeed();
void decreasespeed();
void password(string userinput);
void transmission(int gearbox);
int menu(int userinput);
int main() {
	string a;
	int c;
	password(a);
	transmission(c);

	return 0;
}
// cac function duoc viet duoi day nhu sau:
void increasespeed(){		// function tang toc o so D
	system("cls");
	speed+=5;
	cout<<"TOC DO HIEN TAI: "<<speed<<" KM/H"<<endl;
	if(speed>60){
		cout<<"TOC DO NGUY HIEM, NEN GIAM TOC"<<endl;	
	}
	cout<<"MOI LUA CHON"<<endl;
	cout<<"1: TANG TOC"<<endl<<"2: GIAM TOC"<<endl<<"3: PHANH"<<endl<<"4: TRO VE MENU CHINH"<< endl;	
}
void increasespeedR(){		// function tang to o so R
	system ("cls");
	speed+=5;
	cout<<"TOC DO HIEN TAI: "<<speed<<" KM/H"<<endl;
	if(speed>20){
		cout<<"KHONG NEN CHAY QUA 20 KM/H KHI LUI, NEN GIAM TOC"<<endl;
	}
	cout<<"MOI LUA CHON"<<endl;
	cout<<"1: TANG TOC"<<endl<<"2: GIAM TOC"<<endl<<"3: PHANH"<<endl<<"4: TRO VE MENU CHINH"<< endl;
}
void decreasespeed(){		// function giam toc o so D va R
	system("cls");	
	speed-=5;
	if(speed<0){
		speed=0;
	}
	cout<<"TOC DO HIEN TAI: "<<speed<<" KM/H"<<endl;
	if(speed>60){
		cout<<"TOC DO NGUY HIEM, NEN GIAM TOC"<<endl;	
	}
	cout<<"MOI LUA CHON"<<endl;
	cout<<"1: TANG TOC"<<endl<<"2: GIAM TOC"<<endl<<"3: PHANH"<<endl<<"4: TRO VE MENU CHINH"<< endl;
}


void password(string userinput){	// function nhap va kiem tra password
	string pass="12345678";
	cout<<"NHAP MA SO CA NHAN ";
	cin>>userinput;

	if (userinput==pass){
		system("cls");
	}
	else {
	/*	do {
		system("cls");
		cout<<"NHAP LAI ";
		cin>>userinput;
	}*/
		while(userinput!=pass){
		system("cls");
		cout<<"NHAP LAI ";
		cin>>userinput;			
		}
	}
	system("cls");
	cout<<"XIN CHAO ";
	cout<<userinput<<endl;
}
void transmission(int gear){		// function chon tay so o hop so
	int b;
	int c;
	cout<<"XIN MOI LUA CHON"<<endl;
	cout<<"1. P"<<endl<<"2. R"<<endl<<"3. N"<<endl<<"4. D"<<endl<<"5. POWER OFF"<<endl;
	cin>>gear;
	switch(gear){
		case 1:
			system("cls");
			if (speed==0){
				cout<<"DA VE SO P "<<endl;
			}
			else{
				cout<<"HAY CHAC CHAN XE DA DUNG HAN VA VAN TOC LA 0 KM/H"<<endl;
			}
			transmission(c);
			
			break;
		case 2:
			system("cls");
			cout<<"TOC DO HIEN TAI: "<<speed<<" KM/H"<<endl;
			if (speed==0){
				cout<<"DA VE SO R"<<endl;
				t=1;
				menu(b);
			}
			else{
				cout<<"HAY CHAC CHAN TOC DO XE LA 0 KM/H"<<endl;
				
			}	
			transmission(c);
			break;
		case 3:
			system("cls");
			cout<<"DA VE SO N"<<endl;
			cout<<"CHU Y SU DUNG PHANH TAY DE DAM BAO AN TOAN"<<endl;
			
			transmission(c);
			break;
		case 4:
			system("cls");
			cout<<"TOC DO HIEN TAI: "<<speed<<" KM/H"<<endl;
			cout<<"DA VE SO D"<<endl;			
			t=0	;
			menu(b);
			break;
		case 5:
			system("cls");
			cout<<"GOOD BYE"<<endl;
			break;
		default:

			while((gear!=1)&&(gear!=2)&&(gear!=3)&&(gear!=4)&&(gear!=5)){
				system("cls");
				cout<<"VUI LONG CHON LAI @_@"<<endl;			
				transmission(c);
			}

	}
	
/*		while((gear!=1)&&(gear!=2)&&(gear!=3)&&(gear!=4)&&(gear!=5)){
				system("cls");
				cout<<"VUI LONG CHON LAI"<<endl;
				cin>>gear;
			}*/


}
int menu(int userinput){		// function menu khi chon D hoac R
	int d;
	cout<<"MOI LUA CHON"<<endl;
	cout<<"1: TANG TOC"<<endl<<"2: GIAM TOC"<<endl<<"3: PHANH"<<endl<<"4: TRO VE MENU CHINH"<< endl;
	do{
	cin>>userinput;
	switch(userinput){
		case 1:
			if(t==0){
				increasespeed();
			}
			else{
				increasespeedR();
			}
			break;	
		case 2:
			decreasespeed();
			break;
		case 3:
			system("cls");
			speed=0;
			cout<<"TOC DO HIEN TAI: "<<speed<<"KM/H"<<endl;
			cout<<"MOI LUA CHON"<<endl;
			cout<<"1: TANG TOC"<<endl<<"2: GIAM TOC"<<endl<<"3: PHANH"<<endl<<"4: TRO VE MENU CHINH"<< endl;

			break;
		case 4:
			system("cls");
			transmission(d);
			break;
		}
		}
	while(userinput!=4);
	
}
