//string s is initial string
//string sn is the final string
for(ll i=0;i<n;i++)
{
    store[sn[i]-'a'].push(i);
}
for(ll i=0;i<n;i++)
{
    arr[i]=store[s[i]-'a'].front();
    store[s[i]-'a'].pop();
}
