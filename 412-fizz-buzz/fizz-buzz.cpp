class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> v(n);

        for(int i = 0; i < n; i++){
            int j = i+1;
            if( j % 3 == 0 && j % 5 == 0) v[i] = "FizzBuzz";

            else if( j % 3 == 0 ) v[i] = "Fizz";
            else if( j % 5 == 0)  v[i] = "Buzz";
            else v[i] = to_string(j);

        }
        return v;
    }
};