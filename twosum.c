class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec_twoSum, vec_numsTemp;
        int nBeginPos, nEndPos;    //the index of vector
        vec_numsTemp = nums;
        nBeginPos = 0;
        //Through the vector of nums
        vector<int>::iterator iterBegin;
        for(vector<int>::iterator iterBegin = vec_numsTemp.begin(); iterBegin != vec_numsTemp.end();iterBegin ++){
            nEndPos   = 0;
           for(vector<int>::iterator iterEnd = vec_numsTemp.begin(); iterEnd != vec_numsTemp.end();iterEnd++){
               if((nBeginPos != nEndPos)&&(*iterBegin + *iterEnd == target)){
                   vec_twoSum.push_back(nBeginPos);
                   vec_twoSum.push_back(nEndPos);
                   cout<<"[";
                   cout<<nBeginPos<<",";
                   cout<<nEndPos;
                   cout<<"]"<<endl;
                   return vec_twoSum;      //Suppose that thers is only one set of data that meets the conditions in the input vector.
               }
               nEndPos ++;
           }
           nBeginPos ++;
       }
    }
};
