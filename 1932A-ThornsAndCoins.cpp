#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 1; p < s.size(); p++){
            if(s[p - 1] == '*' && s[p] == '*'){break;}
            cnt += (s[p] == '@');
        }

        printf("%ld\n", cnt);
    }

}
