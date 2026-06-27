using namespace  std;


class Solution {
public:
    string getHint(string secret, string guess) {

        int bulls = 0;
        int cows = 0;

        vector<int> freqSecret(10,0);
        vector<int> freqGuess(10,0);

        for(int i=0;i<secret.size();i++){

            if(secret[i]==guess[i]){
                bulls++;
            }
            else{
                freqSecret[secret[i]-'0']++;
                freqGuess[guess[i]-'0']++;
            }
        }

        for(int d=0;d<10;d++)
            cows += min(freqSecret[d],freqGuess[d]);

        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};