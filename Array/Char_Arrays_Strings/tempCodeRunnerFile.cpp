int main(){
    char ch[100];
    cin>>ch;
    int count=0;
    for(int i=0; (ch[i] != '\0'); i++){
        count++;
    }
    int n= count;
    reverse(ch,n);
    printarr(ch,n);
}