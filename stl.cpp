/*all codes are for refrence purpose only 
to revise the syntax*/

#include<bits/stdc++.h>
using namespace std;

/*pair*/
pair<int,int> p={1,3};
pair<int,pair<int,int>> p1={1,{1,3}};
cout << p1.first << p1.second.first;


/*vector*/
vector <int> v; /* {}*/
v.push_back(1);  /*{1}*/
v.push_back(2);  /* {1,2} */
v.emplace_back(2); /* {1,2,2} */

/*for pairs in vector*/
v.push_back({1,2});
v.emplace_back(1,2);
/*both does same work*/

/*vector pre declaration*/
vector <int> v(5,20); /*{20,20,20,20,20}*/
vector <int> v1(v); /*v1 is copied to v*/


/*vector iterator*/
vector<int>::iterator it=v.begin(); /* --> this will store the memory */
cout << *(it);

vector<int>::iterator it=v.end(); /* stores the memory location after the last element */
v.back() /* last element*/


for(vector<int>::iterator it=v.begin();it !=v.end();it++){
cout << *(it);
}

/*to reuce syntax we use*/

for(auto it=v.begin(); it!=v.end() ;it++) {
cout<< *(it);
}








