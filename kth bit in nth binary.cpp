class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1){
            return '0';
        }
        int len=(1<<n)-1;
        int mid=(1+len)>>1;
        if(mid==k){
            return '1';
        }
        else if(k<mid){
            return findKthBit(n-1,k);
            
        }
        else{
            char s=findKthBit(n-1,mid-(k-mid));
            if(s=='0') return '1';
            return '0';
        }

























recursion problems::


pow-using-recursion.cpp
satyasivaganesh / pow-using-recursion.cpp
dig-count-using-recursion.py
satyasivaganesh / dig-count-using-recursion.py
count-of-digits-using-recursion.py
satyasivaganesh / count-of-digits-using-recursion.py
factorial-using-recursion.py
satyasivaganesh / factorial-using-recursion.py
factorial-using-recursion
satyasivaganesh / factorial-using-recursion
string-rev-using-recursion
satyasivaganesh / string-rev-using-recursion
digit-count-using-recursion.py
satyasivaganesh / digit-count-using-recursion.py
Recent activity
