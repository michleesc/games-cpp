#include <iostream>
#include <conio.h>
#include <string>
#include <time.h>
#include <stdio.h>
#include <windows.h>

using namespace std;


struct weapon
{
	string sword;
	string axe;
	string arrow;
	string none;
}equip_w;

struct stats
{
	string nama;
	int health;
	int power;
	int defends;
	int magic;
	int spirit;
	
}player;

struct boss_horse
{
	string nama;
	int health;
	int power;
	int defends;
	int magic;
	int spirit;
}horse;

struct boss_turtle
{
	string nama;
	int health;
	int power;
	int defends;
	int magic;
	int spirit;
}turtle;

void garis()
{
	cout<<"==============================================================="<<endl;
}
int main()
{
	string equiped;
	string offhand;
	string pilih_senjata;
	string choose_e;
	int stat_pt;
	int pilih_upgrade;
	int pilih_status;
	int pilih_boss;
	int tambah_darah;
	int tambah_power;
	int tambah_defends;
	int tambah_magic;
	int tambah_spirit;
	char lanjut;
	string ganti_senjata;
	string pilih_combat;
	
	equip_w.arrow = "Arrow";
	equip_w.axe = "Axe";
	equip_w.sword = "Sword";
	equip_w.none = "None";
	
	equiped = equip_w.none;
	
	player.health = 1000;
	player.power = 10;
	player.defends = 5;
	player.magic = 7;
	player.spirit = 25;
	
	horse.nama = "Lord Horse";
	horse.health = 2000;
	horse.magic = 10;
	horse.power = 100;
	horse.defends = 10;
	horse.spirit = 10;
	
	turtle.nama = "Lord Turtle";
	turtle.health = 5000;
	turtle.magic = 15;
	turtle.power = 300;
	turtle.defends = 10;
	turtle.spirit = 10;
	
	
					
	int money = 5000;
	stat_pt = 15;
		garis();
		cout<<"Hallo... Selamat Datang Di Game petualangan seru\n";
		garis();
		cout<<"Masukkan Nama mu : ";
		getline(cin,player.nama);
		
		awal:
		system ("cls");
		garis();
		cout<<"hello, "<<player.nama<<" Pilihlah senjata yang kamu inginkan \n";
		cout<<"Gold yang kamu punya saat ini : "<<money<<endl;
		garis();
		cout<<"Setiap senjata memiliki penambahan power "<<endl<<endl;
		cout<<equip_w.sword<<" (+30)\t: 1000\n"<<equip_w.axe<<" (+25)\t: 750\n"<<equip_w.arrow<<" (+25)\t: 750\n"<<equip_w.none<<" (+0)\t: 0\n";
		garis();
		cout<<"Masukkan Pilihan mu : ";
		getline(cin,pilih_senjata);
		
		
		
		if ((pilih_senjata =="Sword") || (pilih_senjata == "sword") || (pilih_senjata == "SWORD"))
		{
			player.power = player.power + 30;
			money = money - 1000;
			cout<<"Yayyy !!!, Kamu memilih senjata "<<pilih_senjata<<"\n ";
			cout<<"Sisa Gold Kamu adalah "<<money<<endl;
			system ("pause");
		}
		
		else if ((pilih_senjata =="Axe") || (pilih_senjata == "axe") || (pilih_senjata == "AXE"))
		{
			player.power = player.power + 25;
			money = money - 750;
			cout<<"Yayyy !!!, Kamu memilih senjata "<<pilih_senjata<<"\n ";
			cout<<"Sisa Gold Kamu adalah "<<money<<endl;
			system ("pause");
		}
		
		else if ((pilih_senjata =="Arrow") || (pilih_senjata == "arrow") || (pilih_senjata == "ARROW"))
		{
			player.power = player.power + 25;
			money = money - 750;
			cout<<"Yayyy !!!, Kamu memilih senjata "<<pilih_senjata<<"\n ";
			cout<<"Sisa Gold Kamu adalah "<<money<<endl;
			system ("pause");
		}
		else if ((pilih_senjata =="None") || (pilih_senjata == "none") || (pilih_senjata == "NONE"))
		{
			player.power = player.power + 0;
			cout<<"Yayyy !!!, Kamu memilih senjata "<<pilih_senjata<<"\n ";
			cout<<"Sisa Gold Kamu adalah "<<money<<endl;
			system ("pause");
		}
		
		else 
		{
			cout<<"Maaf, Pilihan yang anda masukkan tidak ada !!!\n";
			system("pause");
			goto awal;
		}
		
		
		menu:
		system ("cls");
		garis();
		cout<<"\t\tVillage Land of Dawn \n";
		garis();
		cout<<"1. Cek status \n2. Battle with enemy \n3. Increase your status \n4. Change Weapon \n5. Exit the game \n";
		garis();
		cout<<"pilihlah pilihanmu : ";
		cin>>pilih_status;
		
		system ("cls");

		switch (pilih_status)
		{
			case 1:
				garis();
				cout<<"Gold : "<<money<<endl;
				cout<<"Player HP\t= "<<player.health<<" "<<endl;
				cout<<"Player Power\t= "<<player.power<<" "<<endl;
				cout<<"Player Defends\t= "<<player.defends<<" "<<endl;
				cout<<"Player Magic\t= "<<player.magic<<" "<<endl;
				cout<<"Player Spirit\t= "<<player.spirit<<" "<<endl;
				cout<<"Senjata\t\t= "<<pilih_senjata<<" "<<endl;
				garis();
				system ("pause");
				goto menu;
				
			case 2:
				menuboss:
				system("cls");
				garis();
				cout<<"1. Battle With Lord Horse(Easy) \n2. Battle With Lord Turtle(Hard) \n3. Kembali \n";
				garis();
				cout<<"Masukkan Lawan Mu : ";
				cin>>pilih_boss;
				
				if (pilih_boss == 1)
				{
					bertarunghorse:
					system("cls");
					cout<<player.nama<<"\t\t\t | "<<horse.nama<<endl;
					cout<<"HP\t= "<<player.health<<"\t\t\t | "<<"HP\t\t= "<<horse.health<<endl;
					cout<<"Power\t= "<<player.power<<"\t\t\t | "<<"Power\t= "<<horse.power<<endl;
					cout<<"Defends\t= "<<player.defends<<"\t\t\t | "<<"Defends\t= "<<horse.defends<<endl;
					cout<<"Magic\t= "<<player.magic<<"\t\t\t | "<<"Defends\t= "<<horse.magic<<endl;
					cout<<"Spirit\t= "<<player.spirit<<"\t\t\t | "<<"Spirit\t= "<<horse.spirit<<endl;
					garis();
					
					if ((horse.health == 0) || (horse.health <= 0))
					{
						cout<<"Selamat, kamu memenangkan Battle melawan "<<horse.nama<<endl;
						goto selesai;
						
					}
					if ((player.health == 0) || (player.health <= 0))
					{
						cout<<"Yah!!, Kamu Kalah Melawan "<<horse.nama<<endl;
						cout<<"Ulangi Permainan ? (y/n) : ";
						cin>>lanjut;
						
						while ((lanjut == 'y') || (lanjut == 'Y'))
						{
							player.health = 1000;
							goto bertarunghorse;
						}
						while ((lanjut == 'n') || (lanjut == 'N'))
						{
							goto selesai;
						}
						
					}
						
						
						cout<<"Type :  "<<endl;
						cout<<"'Attack' to attack your enemy"<<endl;
						cout<<"'Block' to block enemy attack"<<endl;
						cout<<"'Heal' to heal your HP"<<endl;
						cout<<"'Run' escape from the enemy"<<endl;
						garis();
						cout<<"> ";cin>>pilih_combat;
						
						if ((pilih_combat == "Attack") || (pilih_combat == "attack") || (pilih_combat == "ATTACK"))
						{
							horse.health = horse.health - player.power;
							cout<<"Kamu telah menyerang "<<horse.nama<<" Sebesar -"<<player.power<<endl;
							system("pause");
							
							player.health = player.health - horse.power;
							
							garis();
							cout<<"Sekarang Giliran "<<horse.nama<<" Menyerang..."<<endl;
							system("pause");
							cout<<horse.nama<<" Menyerang Sebesar -"<<horse.power<<endl;
							garis();
							system("pause");
							goto bertarunghorse;
						
							
						}
						
						else if ((pilih_combat == "Block") || (pilih_combat == "block") || (pilih_combat == "BLOCK"))
						{
							cout<<"Selamat, Kamu telah memblock serangan "<<horse.nama<<" "<<endl;
							garis();
							system("pause");
							system("cls");
							goto bertarunghorse;
						}
						
						else if ((pilih_combat == "Heal") || (pilih_combat == "heal") || (pilih_combat == "HEAL"))
						{
							player.health = player.health + 20;
							cout<<"Yayy !!!, kamu mendapatkan tambahan darah sebesar +20 "<<endl;
							system("pause");
						
							player.health = player.health - horse.power;
							
							garis();
							cout<<"Sekarang Giliran "<<horse.nama<<" Menyerang..."<<endl;
							system("pause");
							cout<<horse.nama<<" Menyerang Sebesar -"<<horse.power<<endl;
							garis();
							system("pause");
							goto bertarunghorse;
						}
						
						else if ((pilih_combat == "Run") || (pilih_combat == "run") || (pilih_combat == "RUN"))
						{
							cout<<"Kita Berhasil kabur dari Musuh, Silahkan updgrade status mu !!!\n";
							system("pause");
							goto menu;
						}
						
						else 
						{
							cout<<"Maaf, Type yang anda cari tidak ada "<<endl;
							system("pause");
							goto bertarunghorse;
						}
					
				}
				
				else if (pilih_boss == 2)
				{
					bertarungturtle:
					system("cls");
					cout<<player.nama<<"\t\t\t | "<<turtle.nama<<endl;
					cout<<"HP\t= "<<player.health<<"\t\t\t | "<<"HP\t\t= "<<turtle.health<<endl;
					cout<<"Power\t= "<<player.power<<"\t\t\t | "<<"Power\t= "<<turtle.power<<endl;
					cout<<"Defends\t= "<<player.defends<<"\t\t\t | "<<"Defends\t= "<<turtle.defends<<endl;
					cout<<"Magic\t= "<<player.magic<<"\t\t\t | "<<"Defends\t= "<<turtle.magic<<endl;
					cout<<"Spirit\t= "<<player.spirit<<"\t\t\t | "<<"Spirit\t= "<<turtle.spirit<<endl;
					garis();
					
					if ((turtle.health == 0) || (turtle.health <= 0))
					{
						cout<<"Selamat, kamu memenangkan Battle melawan "<<turtle.nama<<endl;
						garis();
						goto selesai;
						
					}
					if ((player.health == 0) || (player.health <= 0))
					{
						cout<<"Yah!!, Kamu Kalah Melawan "<<turtle.nama<<endl;
						garis();
						cout<<"Ulangi Permainan ? (y/n) : ";
						cin>>lanjut;
						
						while ((lanjut == 'y') || (lanjut == 'Y'))
						{
							player.health = 1000;
							goto bertarungturtle;
						}
						while ((lanjut == 'n') || (lanjut == 'N'))
						{
							goto selesai;
						}
					}
					
					cout<<"Type :  "<<endl;
					cout<<"'Attack' to attack your enemy"<<endl;
					cout<<"'Block' to block enemy attack"<<endl;
					cout<<"'Heal' to heal your HP"<<endl;
					cout<<"'Run escape from the enemy"<<endl;
					garis();
					cout<<"> ";cin>>pilih_combat;
					if ((pilih_combat == "Attack") || (pilih_combat == "attack") || (pilih_combat == "ATTACK"))
						{
							turtle.health = turtle.health - player.power;
							cout<<"Kamu telah menyerang "<<turtle.nama<<" Sebesar -"<<player.power<<endl;
							system("pause");
							
							player.health = player.health - turtle.power;
							garis();
							cout<<"Sekarang Giliran "<<turtle.nama<<" Menyerang..."<<endl;
							system("pause");
							cout<<turtle.nama<<" Menyerang Sebesar -"<<turtle.power<<endl;
							garis();
							system("pause");
							goto bertarungturtle;
						
							
						}
						
						else if ((pilih_combat == "Block") || (pilih_combat == "block") || (pilih_combat == "BLOCK"))
						{
							cout<<"Selamat, Kamu telah memblock serangan "<<turtle.nama<<" "<<endl;
							garis();
							system("pause");
							system("cls");
							goto bertarungturtle;
						}
						
						else if ((pilih_combat == "Heal") || (pilih_combat == "heal") || (pilih_combat == "HEAL"))
						{
							player.health = player.health + 20;
							cout<<"Yayy !!!, kamu mendapatkan tambahan darah sebesar +20 "<<endl;
							system("pause");
						
							player.health = player.health - turtle.power;
							garis();
							
							cout<<"Sekarang Giliran "<<turtle.nama<<" Menyerang..."<<endl;
							system("pause");
							cout<<turtle.nama<<" Menyerang Sebesar -"<<turtle.power<<endl;
							garis();
							system("pause");
							goto bertarungturtle;
						}
						
						else if ((pilih_combat == "Run") || (pilih_combat == "run") || (pilih_combat == "RUN"))
						{
							cout<<"Kita Berhasil kabur dari Musuh, Silahkan updgrade status mu !!!\n";
							system("pause");
							goto menu;
						}
						
						else 
						{
							cout<<"Maaf, Type yang anda cari tidak ada "<<endl;
							system("pause");
							goto bertarungturtle;
						}
					
				}
				
				else if (pilih_boss == 3)
				{
					goto menu;
				}
				else 
				{
					cout<<"Maaf, yang anda masukkan salah !!!\n";
					system("pause");
					goto menuboss;
				}
				system("cls");
				selesai :
				cout<<"Save Your Data Game, Before Exit(Y/N) ? ";
				cin>>lanjut;
				
				while (lanjut=='Y' or lanjut=='y')
				{
					garis();
					cout<<"Status After Battle \n";
					cout<<"Player HP\t= "<<player.health<<" "<<endl;
					cout<<"Player Power\t= "<<player.power<<" "<<endl;
					cout<<"Player Defends\t= "<<player.defends<<" "<<endl;
					cout<<"Player Magic\t= "<<player.magic<<" "<<endl;
					cout<<"Player Spirit\t= "<<player.spirit<<" "<<endl;
					cout<<"Senjata\t\t= "<<pilih_senjata<<" "<<endl;
					garis();
					exit(1);
				}
				while (lanjut =='N' or lanjut == 'n')
				{
					exit(1);
					system("pause");
				}
				
			case 3:
				menuupgrade:
				system("cls");
				garis();
				cout<<"Gold : "<<money<<endl;
				cout<<"1. Player HP\t\t= "<<player.health<<" "<<endl;
				cout<<"2. Player Power\t\t= "<<player.power<<" "<<endl;
				cout<<"3. Player Defends\t= "<<player.defends<<" "<<endl;
				cout<<"4. Player Magic\t\t= "<<player.magic<<" "<<endl;
				cout<<"5. Player Spirit\t= "<<player.spirit<<" "<<endl;
				cout<<"6. Kembali\t"<<endl;
				garis();
				cout<<"Penambahan satu tingkat Seharga 1 Gold \n";
				garis();
				cout<<"Pilihlah yang ingin ditingkatkan = ";
				cin>>pilih_upgrade;
				
				if ((money == 0) || (money <= 0))
				{			
					cout<<"Maaf, kamu tidak bisa upgrade dikarenakan Gold Mu habis "<<endl;
					system("pause");
					goto menu;
						
				}
				if (pilih_upgrade == 1)
				{
					cout<<"Player HP anda "<<player.health<<" "<<endl;
					cout<<"Ingin ditambah : ";
					cin>>tambah_darah;
					
					money = money - tambah_darah;
					player.health = player.health + tambah_darah;
					cout<<"Jadi total Player HP anda adalah "<<player.health<<" "<<endl;
					cout<<"Sisa Gold anda : "<<money<<endl;
					system("pause");
					goto menu;
				}
				else if (pilih_upgrade == 2)
				{
					cout<<"Player Power anda "<<player.power<<" "<<endl;
					cout<<"Ingin ditambah : ";
					cin>>tambah_power;
					
					money = money - tambah_power;

					player.power = player.power + tambah_power;
					cout<<"Jadi total Player Power anda adalah "<<player.power<<" "<<endl;
					cout<<"Sisa Gold anda : "<<money<<endl;
					system("pause");
					goto menu;
				}
				
				else if (pilih_upgrade == 3)
				{
					cout<<"Player Defends anda "<<player.defends<<" "<<endl;
					cout<<"Ingin ditambah : ";
					cin>>tambah_defends;
					
					money = money - tambah_defends;

					player.defends = player.defends + tambah_defends;
					cout<<"Jadi total Player Defends anda adalah "<<player.defends<<" "<<endl;
					cout<<"Sisa Gold anda : "<<money<<endl;
					system("pause");
					goto menu;
				}
				
				else if (pilih_upgrade == 4)
				{
					cout<<"Player Magic anda "<<player.magic<<" "<<endl;
					cout<<"Ingin ditambah : ";
					cin>>tambah_magic;
					
					money = money - tambah_magic;
					player.magic = player.magic + tambah_magic;
					cout<<"Jadi total Player Magic anda adalah "<<player.magic<<" "<<endl;
					cout<<"Sisa Gold anda : "<<money<<endl;
					system("pause");
					goto menu;
				}
				
				else if (pilih_upgrade == 5)
				{
					cout<<"Player Spirit anda "<<player.spirit<<" "<<endl;
					cout<<"Ingin ditambah : ";
					cin>>tambah_spirit;
					
					money = money - tambah_spirit;

					player.spirit = player.spirit + tambah_spirit;
					cout<<"Jadi total Player Spirit anda adalah "<<player.health<<" "<<endl;
					cout<<"Sisa Gold anda : "<<money<<endl;
					system("pause");
					goto menu;
				}
				
				else if (pilih_upgrade == 6)
				{
					goto menu;
				}
				
				else 
				{
					cout<<"Maaf, yang anda masukkan salah !!!\n";
					system("pause");
					goto menuupgrade;
				}
				
			case 4:
				garis();
				cout<<"Weapon anda sekarang adalah "<<pilih_senjata<<" "<<endl;
				cout<<"Apakah anda yakin mengubah senjata anda (y/n)? : ";
				cin>>lanjut;
				garis();
				
				while (lanjut=='Y' or lanjut=='y')
				{
					cout<<"Sword \nAxe \nArrow \nNone \n";
					garis();
					cout<<"Masukkan Nama senjata yang ingin dipakai : ";
					cin>>pilih_senjata;
					garis();
					
					if ((pilih_senjata =="Sword") || (pilih_senjata == "sword") || (pilih_senjata == "SWORD"))
					{
						player.power = 40;
						cout<<"YAYY !!!, Weapon anda sudah dipilih menjadi "<<pilih_senjata<<endl;
					}
		
					else if ((pilih_senjata =="Axe") || (pilih_senjata == "axe") || (pilih_senjata == "AXE"))
					{
						player.power = 35;
						cout<<"YAYY !!!, Weapon anda sudah dipilih menjadi "<<pilih_senjata<<endl;
					}
		
					else if ((pilih_senjata =="Arrow") || (pilih_senjata == "arrow") || (pilih_senjata == "ARROW"))
					{
						player.power = 35;
						cout<<"YAYY !!!, Weapon anda sudah dipilih menjadi "<<pilih_senjata<<endl;
					}
					
					else if ((pilih_senjata =="None") || (pilih_senjata == "none") || (pilih_senjata == "NONE"))
					{
						player.power = 10;
						cout<<"YAYY !!!, Weapon anda sudah dipilih menjadi "<<pilih_senjata<<endl;
					}
					
					else 
					{
						cout<<"Maaf, yang anda masukkan salah !!!\n";
					}
					garis();
					system("pause");
					goto menu;
				}
				while (lanjut =='N' or lanjut == 'n')
				{
					goto menu;
				}
			case 5:
				cout<<"Terimakasih telah menggunakan aplikasi kami \n";
				cout<<"Status Anda Saat ini :\n";
				cout<<"Player HP\t= "<<player.health<<" "<<endl;
				cout<<"Player Power\t= "<<player.power<<" "<<endl;
				cout<<"Player Defends\t= "<<player.defends<<" "<<endl;
				cout<<"Player Magic\t= "<<player.magic<<" "<<endl;
				cout<<"Player Spirit\t= "<<player.spirit<<" "<<endl;
				cout<<"Senjata\t\t= "<<pilih_senjata<<" "<<endl;
				exit(1);
				
			default :
				cout<<"Pilihan anda tidak masuk daftar kami !!! \n Coba Lagi !!!\n";
				system("pause");
				goto menu;
		}
}


