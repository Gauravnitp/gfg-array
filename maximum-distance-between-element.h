int maxDistance(int arr[], int n)
{
//Code here
map<int, pair<int, int>> map;
int i, max = 0;
for( i = 0; i < n; i++)
{
    if(map.find(arr[i]) == map.end())
    {
        map[arr[i]] = make_pair(i, i);
    }
    else
    {
        map[arr[i]].second = i;
    }
}
for(auto j : map)
{
    if((j.second.second - j.second.first) > max)
        max = (j.second.second - j.second.first);
}
return max;
}