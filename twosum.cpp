#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
      
      //let's solve using the bruteforce approach
	//lets create the vector

	vector<int>ans;
	for(int i=0;i<nums.size()-1;i++)
	{
		for(int j=i+1;j<nums.size();j++)
		{
			if(nums[i]+nums[j]==target)
			{
              ans.push_back(i);
              ans.push_back(j);
              return ans;
              break;
			}
		}
	}
	return ans;
    }
int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<int> arr={3,2,4};
	vector<int>result = twoSum(arr, 6);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}