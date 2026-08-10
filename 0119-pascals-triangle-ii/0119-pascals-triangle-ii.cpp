class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row = {1};

        for(int i=1; i<=rowIndex; i++){
            vector<int> temp(i+1, 1);
            for(int j=1; j<i; j++){
                temp[j] = row[j-1]+row[j];
            }
            row = temp;
        }
        return row;
    }
};





// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
//         vector<int> ans;
//         long long val = 1;

//         for(int k=0; k<=rowIndex; k++){
//             ans.push_back(val);
//             val = val*(rowIndex-k)/(k+1);
//         }

//         return ans;
//     }
// };