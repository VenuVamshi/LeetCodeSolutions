class Solution {
public:
    string addBinary(string a, string b) {

        // Stores final binary answer
        string answer = "";

        // Start from last characters
        int i = a.size() - 1;
        int j = b.size() - 1;

        // Carry generated during addition
        int carry = 0;

        // Continue while bits remain or carry exists
        while (i >= 0 || j >= 0 || carry) {

            int bitA = 0;
            int bitB = 0;

            // Read current bit from first string
            if (i >= 0)
                bitA = a[i] - '0';

            // Read current bit from second string
            if (j >= 0)
                bitB = b[j] - '0';

            // Total binary sum
            int total = bitA + bitB + carry;

            // Store current answer bit
            answer += char((total % 2) + '0');

            // Compute next carry
            carry = total / 2;

            i--;
            j--;
        }

        // Digits were generated in reverse order
        reverse(answer.begin(), answer.end());

        return answer;
    }
};