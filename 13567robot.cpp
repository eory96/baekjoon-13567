#include <iostream>
#include <string>
using namespace std;

int main() {
    int dir = 1;
    int m, n;
    int x = 0;
    int y = 0;
    
    scanf("%d %d",&m,&n);
    for (int i = 0; i < n; i++) {
        string str;
        int dl;
        cin >> str >> dl;
        if (str.compare("TURN")==0) {
            if(dl==0) dir+=1;
            else dir-=1;
            
            if(dir==0)  dir=4;
            else if(dir==5) dir=1;
            continue;
        }
        
        if(dir==1) x+=dl;
        else if(dir==2) y+=dl;
        else if(dir==3) x-=dl;
        else y-=dl;
        
        if (x < 0 || y<0 || x >m | y>m) {
            printf("-1\n");
            return 0;
        }
    }
    printf("%d %d\n",x,y);
}
