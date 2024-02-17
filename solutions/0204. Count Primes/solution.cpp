class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2){
            return 0;
        }
        vector<bool> prime(floor(n/2), true);
    
        // 2 is the only even prime so we can
        // ignore that. Loop starts from 3.
        for (int i = 3; i * i < n; i += 2) {
            // If i is prime, mark all its multiples
            // if it is not, it should be false already (by definition)
            if (prime[floor(i/2)] == true){
                for (int j = i * i; j < n; j += i * 2){
                    prime[j / 2] = false;
                }
            }
        }
        vector<int> primes{2};
        for (int i = 3; i < n; i += 2)
            if (prime[i / 2] == true)
                primes.push_back(i);
        return primes.size();
        }
};
