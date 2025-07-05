#include <bits/stdc++.h>
#define int long long int
using namespace std;

 int N = 1e5;
vector<int> tot(N);

void calculate_totient()
{
    vector<bool> pr(N, true);

    for (int i = 2; i < N; i++)
    {
        for (int j = i * i; j < N; j += i)
        {
            pr[j] = false;
        }
    }
    iota(tot.begin(), tot.end(), 0);
    for (int i = 2; i < N; i++)
    {
        if (pr[i] == true)
        {

            // multiples of prime
            for (int j = i; j < N; j += i)
            {
                // j is divisible by i
                // i is prime
                tot[j] /= i;
                tot[j] *= (i - 1);
            }
        }
    }
}

int32_t main()
{

    calculate_totient();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << tot[i] << '\n';
    }
    return 0;
}
