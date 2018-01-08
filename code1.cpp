#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>&, int);
int main() {
	// your code goes here
	vector<int> v(100);
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&v[i]);
	}
	for(i=0;i<n;i++)
	{
	    cout<<v[i]<<" "<<endl;
	}
	cout<<v.size()<<endl;
	cout<<v.empty()<<endl;
	v.resize(n);
	cout<<"Instance #2"<<endl;
	vector<int> t;
	for(i=0;i<100;i++){
	    t.push_back(i);
	}
	cout<<t.size();
	for(i=0;i<100;i++){
	    cout<<t[i]<<" "<<endl;
	}
	t.resize(20);
	cout<<"after resize\n";
	for(i=0;i<100;i++){
	    cout<<t[i]<<" "<<endl;
	}
	t.push_back(99991111);
	cout<<"Instance #3\n***************************************************************"<<endl;
	display(v,99991111);
	return 0;
}
void display(vector<int> &vect,int t){
    int i;
    for(i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    }
    cout<<"\nv.size() "<<vect.size();
    cout<<"t="<<t;
}
