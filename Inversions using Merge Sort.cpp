ll inversions=0;
vector<ll> merge(vector<ll> &left,vector<ll> &right)
{
    // take a global variable inversions to caculate the number of inversions.
    ll l=left.size();
    ll r=right.size();
    ll n=l+r;
    vector<ll> arr(n,0);
    ll i=0;
    ll j=0;
    ll k=0;
    while(i<l&&j<r)
    {
        if(left[i]<right[j])
        {
            arr[k]=left[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=right[j];
            k++;
            j++;
            inversions=inversions+(l-i);
        }
    }
    while(i<l)
    {
            arr[k]=left[i];
            k++;
            i++;
    }
    while(j<r)
    {
            arr[k]=right[j];
            k++;
            j++;
    }
    return arr;
}
