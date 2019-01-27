#include<iostream>
#include<string>
#include<cmath>
#include<conio.h>
using namespace std;
int returnWeight(char ch){
	int weight = ch - 64;
	return weight;
}
int main(){
	int count=0;
	int weight[27];
	int wordDiff=0,alphabetDiff=0;
	string word;
	cin>>word;
	for(int i=0;i<word.length();i++){
		for(int j=0;j<word.length();j++){
			if(i!=j){
				if(word[i]!=word[j]){
				
				wordDiff = abs(i-j);
				alphabetDiff = abs(returnWeight(word[i]) - returnWeight(word[j]));
				if(wordDiff==alphabetDiff){
					cout<<word[i]<<" "<<word[j]<<endl;
					cout<<wordDiff<<" "<<alphabetDiff<<endl;
					count++;
			}
		}
		}
	}
}
	cout<<count/2;
	return 0;
}
