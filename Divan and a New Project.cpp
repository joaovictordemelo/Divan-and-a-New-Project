#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef std::vector<int> vi;
typedef std::vector<char> vc;
typedef std::vector<long long> vl;
#define f first 
#define s second
typedef std::vector<vi> vvi; 
typedef std::vector<vvi> vvvi; 
typedef pair<int, int> pii;
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()

typedef pair<long, long> pll;
    
//#define for(i,a,b) for(i=a;i<=b;i++)

#define pb push_back

//based on the sharmaharisam solution

//commented by Mello

using namespace std;

//as a good practice use all numbers as long long

void test(){
        
        

        int n, ans;
        ans = 0;
        cin >> n;
        
        vector<pll>a(n+1); //read the vector of pairs (a[i],i)
        //which means the pairs (number of visits to the ith building, index)
        for(int i = 1; i <= n; i++){

          cin >> a[i].first;
          a[i].second = i;
        }

        sort(all1(a)); 

        reverse(all1(a));

        ll distance = 1; //we start with distance equal to 1
        
        vl position(n+3, 0);

        for(int i = 1; i<=n; i+=2){

            position[a[i].second] = distance;

            if(i!=n) position[a[i+1].second] = -1*distance;
            ans += 2*distance * a[i].first;
            if(i!=n) ans +=2 * distance * a[i+1].first;
            distance++;

        }
        cout << ans << "\n";
        for(int i = 0; i <= n; i++){

            cout << position[i] << " ";
            cout << "\n";
        }

        
}

int main(){

  int t;
    cin >> t;
    while(t--){
        
        test();
    }
    

}
