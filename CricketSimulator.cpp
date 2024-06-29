#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<ctime>

using namespace std;
class Player{
	private:
	string playerName;
	int totalScore;
	int ballsPlayed;
	public:
	Player(): playerName(""),totalScore(0),ballsPlayed(0){}
	void setName(string name){
		playerName=name;
	}
	string getName(){
		return playerName;
	};
	void setTotalscore(int score){
		totalScore+=score;
	};
	int getTotalscore(){
		return totalScore;
	};
	void setBallsplayed(int balls){
		ballsPlayed+=balls;
	}
	int getBallsplayed(){
		return  ballsPlayed;
	}
};
main(){
	string Names[11]={"Babar Azam","Naseem Shah","Agha Salman","Mohammad Amir",
	"Shaheen Afridi","Shadab Khan","Imad Waseem","Fakhar Zaman","Haris Rauf",
	"Mohammad Rizwan","Iftikhar Ahmed"};
	Player A[11];
	for(int i=0;i<11;i++){
		A[i].setName(Names[i]);
	};
	for(int i=0;i<11;i++){
		cout<<i+1<<". "<<A[i].getName()<<"\n";
		cout<<"Scores per balls: ";
		while(true){
			int score;
			do{
				score=(rand()%6-1);
			}while(score==4);
			if(score==(-1)){
				cout<<"OUT\n";
				break;
			}
				A[i].setTotalscore(score);
				A[i].setBallsplayed(1);
				cout<<score<<",";
		}
	
				cout<<"Total Score= "<<A[i].getTotalscore()<<"\n";
				cout<<"Balls Played= "<<A[i].getBallsplayed()<<"\n";
	
	};
	cout<<"\n";
	cout<<"<<<<<< Match Summary >>>>>>"<<endl;
	cout<<"Player Names\t\tScores\t\tBalls Played\n";
	for(int i=0;i<11;i++){
		cout<<A[i].getName()<<"\t\t"<<A[i].getTotalscore()<<"\t\t"<<A[i].getBallsplayed()<<"\n";
			};
			
			int maxscore= A[0].getTotalscore();
			string manofthematch= A[0].getName();
			for(int i=0;i<11;i++){
				if(A[i].getTotalscore()>maxscore){
					manofthematch=A[i].getName();
					maxscore=A[i].getTotalscore();
				}
			};
			cout<<"The man of the match is "<<manofthematch<<endl;
	
}
