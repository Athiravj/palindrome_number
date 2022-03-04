
bool isPalindrome(int x)
{
    int r=0,s=0,n;
    int temp=x;
    if(x<0){
        return false;
    }
   
   do{
        r = x%10;
        s = (s*10) + r;
        x = x/10;
    } 
    while(x>0);
    
   return temp==s;

}