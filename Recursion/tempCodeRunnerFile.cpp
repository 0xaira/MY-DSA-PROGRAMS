void reverse(vector<int> ans, int n,int i){
    if(i>=n/2){
        return;
    }
    swap(ans[i],ans[n-1-i]);
    reverse(ans,n,i+1);
}
void printArray(vector<int> ans, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> ans;
    int size;
    cin>>size;
	
	for (int i = 0; i < size; i++)
	{   
        int x;
        cin>>x;
        ans.push_back(x);
	}
    int i=0;
    reverse(ans,size,i);
    printArray(ans,size);
}