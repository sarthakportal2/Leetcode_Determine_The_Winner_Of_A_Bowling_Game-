class Solution {
public:
//T(C(N)==O(N)) and S(C(N)==O(1))and as It requires Non memory space allocation Iteratively
    int GetScore(const vector<int>& player){//Get Score Function declare
        constexpr int kInv=-3;int score=0;int last10=kInv;//Variables declare and Initialize
        for(int i=0;i<player.size();++i){//Iterating through Player's size 
            score+=i-last10>2?player[i]:player[i]*2;//iNcrementing Player's Score  Winning Game 
            if(player[i]==10)last10=i;}return score;}//Printing Player's Previous Cone's Bowling Collision Score 

    int isWinner(vector<int>& player1, vector<int>& player2) {//Checking If Player is A winner 
        const int score1=GetScore(player1);const int score2=GetScore(player2);//Player's Score Input 
        if (score1>score2)return 1;//Printing 1 to 1st's Winning Score
        else if (score2>score1)return 2;//Printing 2 to 2nd Score 
        else return 0;}};//Printing 0 to th Unwinning Score
