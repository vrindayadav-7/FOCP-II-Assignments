#include <iostream>
#include <vector>

using namespace std;

const int LIMIT = 1000000;

vector<int> primes;

// Sieve of Eratosthenes
void generatePrimes() {

    vector<bool> isPrime(LIMIT + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= LIMIT; i++) {

        if (isPrime[i]) {

            for (int j = i * i; j <= LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= LIMIT; i++) {

        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    generatePrimes();

    int T;
    cin >> T;

    while (T--) {

        long long n;
        cin >> n;

        long long temp = n;

        int distinctPrimeFactors = 0;

        // Prime factorization using precomputed primes
        for (int p : primes) {

            if (1LL * p * p > temp) {
                break;
            }

            if (temp % p == 0) {

                distinctPrimeFactors++;

                while (temp % p == 0) {
                    temp /= p;
                }
            }
        }

        // Remaining prime factor
        if (temp > 1) {
            distinctPrimeFactors++;
        }

        // Answer = 2^k
        long long answer = 1LL << distinctPrimeFactors;

        cout << answer << '\n';
    }

    return 0;
}
