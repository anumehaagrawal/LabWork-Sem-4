#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	vector<string> man,women;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string name;
		cin>>name;
		man.push_back(name);
	}
	for(int i=0;i<n;i++){
		string name;
		cin>>name;
		women.push_back(name);
	}
	map<string,vector<string> > man_pref,women_pref;

	for(int i=0;i<n;i++){
		vector<string> pref;
		for(int j=0;j<n;j++){
			string name;
			cin>>name;
			pref.push_back(name);

		}
		man_pref.insert(make_pair(man.at(i),pref));
	}
	for(int i=0;i<n;i++){
		vector<string> pref;
		for(int j=0;j<n;j++){
			string name;
			cin>>name;
			pref.push_back(name);

		}
		women_pref.insert(make_pair(women.at(i),pref));
	}

	queue<string> free_man;
	map<string,string> marriage;
	for(int i=0;i<n;i++){
		free_man.push(man.at(i));
	}
	int count=n;
	
	while(n>0){
		string current=free_man.front();
		vector<string> v=man_pref.at(current);
		string women=v.at(0);
		man_pref.at(current).erase(man_pref.at(current).begin());
		if(marriage.count(women)>0){
			int index_old,index_new;
			string old_man;
			old_man=marriage.at(women);
			vector<string> wom=women_pref.at(women);
			index_old =find(wom.begin(), wom.end(), old_man) - wom.begin();
			index_new =find(wom.begin(), wom.end(), current) - wom.begin();
			if(index_old>index_new){
				marriage[women]=current;
				free_man.push(old_man);
			}

			}
		else{
			marriage.insert(make_pair(women,current));
			free_man.pop();
			n--;
		}
		}
	cout<<marriage[women.at(2)];


}