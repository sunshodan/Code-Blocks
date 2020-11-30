ll choose(int n, int r=2)
{
    if (n==1)
        return 0;
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
    else
        p = 1;
        return p; 
}
