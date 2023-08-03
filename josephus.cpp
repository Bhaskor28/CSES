// Program showing a policy-based data structure.
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
using namespace __gnu_pbds;

using namespace std;

// a new data structure defined. Please refer below
// GNU link : https://goo.gl/WVDL6g
typedef tree<int, null_type, less<int>, rb_tree_tag,
			tree_order_statistics_node_update>
	ordered_set;

// Driver code
int main()
{
	int n,k;
	cin>>n>>k;
	ordered_set st;
	for(int i=0;i<n;i++){
        st.insert(i+1);
	}
	int i=0;
    while(st.size()>1){

            i=i+k;

            int el=*st.find_by_order(i%(st.size()));

            i=i%st.size();
            if(st.size()>1)
                st.erase(el);

            i=i%st.size();

            cout<<el<<" ";


    }
    int el=*st.find_by_order(i%(st.size()));
    cout<<el<<endl;



	return 0;
}

