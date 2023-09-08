#include<iostream>;
#include<vector>;
using namespace std;

class Solution{
	public:
		vector<vector<int>> generate(int numRows){
			vector<vector<int>> v;
//			if (numRows==1){
//				return {{1}};
//			}
//			if (numRows==2){
//				return v;
//			}
			v.resize(numRows);
			for(int i=2; i<numRows; i++){
				for (int j=1; j<i; j++){
					if 
					v[i].push_back(v[i-1][j-1]+v[i-1][j]);
				}
			}
			return v;
		}
};

int main(){
	Solution sl;
	int numRows; cin>>numRows; cin.ignore();
	vector<vector<int>> v= sl.generate(numRows);
	v.resize(numRows);
	for (int i=0; i<numRows; i++){
		for (int j=0; j<=i; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"press Enter to continue!";
	cin.get();
	return 0;
}













