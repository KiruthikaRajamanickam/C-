#include<iostream>
using namespace std;
int main()
{
    char team_name_1[100];
    char team_name_2[100];
    int score_team_1, score_team_2, overs_team_1, overs_team_2;
    cout<<"Team 1:\nTeam Name:\n";
    cin.getline(team_name_1, 100);
    cout<<"Score:\n";
    cin>>score_team_1;
    cout<<"Overs played:\n";
    cin>>overs_team_1;
    cin.ignore();
    cout<<"Team 2:\nTeam Name:\n";
    cin.getline(team_name_2, 100);
    cout<<"Score:\n";
    cin>>score_team_2;
    cout<<"Overs played:\n";
    cin>>overs_team_2;
    cout<<"Match Details:\nTeam 1:\nName: "<<team_name_1;
    cout<<"\nScore: "<<score_team_1<<"\nOvers played: "<<overs_team_1;
    cout<<"\nTeam 2:\nName: "<<team_name_2<<"\nScore: "<<score_team_2<<"\nOvers played: "<<overs_team_2;
}
