#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int LinearSearch(vector<int>v,int size, int target){
    for(int i = 0;i<size;i++){
        if(v[i]==target){
            return 1;
        }
    }
    return 0;
}

void CountOfZeroOne(vector<int>&v, int& size, int& count_One, int& count_Zero){
    for(int i=0;i<=size;i++){
        if(v[i]==0){
            count_Zero++;
        }
        else{
            count_One++;
        }
    }
    cout<<"Number of zeroes in vector"<<" "<<count_Zero<<endl;
    cout<<"Number of onees in vector"<<" "<<count_One;
}

void MaxiNumber(vector<int>&v, int& size, int& maxi){
    for(int i = 0;i<=size;i++){
        if(v[i]>maxi){
            maxi = v[i];
        }
    }
}

void ExtremePrint(vector<int>&v, int low, int high){
    while(low<=high){
        if(low==high){
            cout<<v[low]<<" ";
            low++;
            high--;
        }
        else{
            cout<<v[low]<<" ";
            cout<<v[high]<<" ";
            low++;
            high--;
        }
        }
}

void ReverseArray(vector<int>&v,int size, int low, int high){
    while(low<=high){
        swap(v[low], v[high]);
        low++,high--;
    }
    for(int i = 0;i<=size;i++){
        cout<<v[i]<<" "<<endl;
    }
}

int UniqueElement(vector<int>&v, int& size){
    int ans = 0;
    for(int i =0;i<=size;i++){
        ans = ans^v[i];
    }
    return ans;
}

void UnionOfTwoArray(vector<int>&v1, vector<int>&v2, int& sizeV1, int& sizeV2, vector<int>&UnionArray){
    for(int i =0;i<=sizeV1;i++){
        UnionArray.push_back(v1[i]);
    }
    for(int i =0;i<=sizeV2;i++){
        UnionArray.push_back(v2[i]);
    }
    int sizeU = UnionArray.size() - 1;
    for(int i = 0;i<=sizeU;i++){
        cout<<UnionArray[i]<<" ";
    }

}

bool IsEqual(vector<int>v1,int k, vector<int>InterSectionArray){
    int size = InterSectionArray.size() -1;
    for(int i =0;i<=size;i++){
        if(InterSectionArray[i] == v1[k]){
            return false;
        }
    }
    return true;
}

void InterSectionOfTwoArray(vector<int>v1, vector<int>v2, int sizeV1, int sizeV2, vector<int>InterSectionArray){
    for(int i=0;i<=sizeV1;i++){
        for(int j = 0;j<=sizeV2;j++){
            if(v1[i]==v2[j]){
                if(IsEqual(v1, i,InterSectionArray)){
                    InterSectionArray.push_back(v1[i]);
                }
                
            }
        }
    }

    //print intersection array
    if(InterSectionArray.empty()){
        cout<<"Intersection Element is not present in these two array"<<endl;
    }
    int sizeI = InterSectionArray.size() -1;
    for(int i =0;i<=sizeI;i++){
        cout<<InterSectionArray[i]<<" ";
    }

}

void pairSum(vector<int>&V, int& size, int sum){
    for(int i = 0;i<=size;i++){
        for(int j= i+1;j<=size;j++){
            if(V[i]+V[j]==sum){
                cout<<"Pair sum is "<<V[i]<<"and"<<V[j]<<"is equal to sum"<<endl;
            }
        }
    }
}

void tripletSum(vector<int>&v,int& size, int& Triplet_Sum){
    for(int i =0;i<=size;i++){
        for(int j =i+1;j<=size;j++){
            for(int k=j+1;k<=size;k++){
                if(v[i]+v[j]+v[k] == Triplet_Sum){
                    cout<<"Sum of Three number is equal to 80 having number to become this "<<" "<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
}

void sortZeroOne(vector<int>&v, int size){
    int low = 0;
    int end = size;
    int i = 0;
    while(i<=end){
        if(v[i]==0){
            swap(v[i],v[low]);
            i++,low++;
        }
        else{
            swap(v[end], v[i]);
            end--;
        }
    }
    cout<<"Sort vector"<<endl;
    for(int i = 0;i<=size;i++){
        cout<<v[i]<<" ";
    }
}

void RowSum(int arr[][3], int row, int col){
    int row_Sum = 0;
    for(int i = 0;i<row;i++){
        for(int j =0;j<col;j++){
            row_Sum = row_Sum + arr[i][j];
        }
        cout<<"Sum of rows "<<i<<" "<<row_Sum<<endl;
    }
}

bool LinearSearchIn2d(int arr[][3], int row, int col ){
    int key = 49;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(arr[i][j]== key){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    //Linear Search in 2D array
    // int arr[3][3]= {{1, 3, 5},{9, 8, 7}, {2, 4, 6}};
    // int row = 3;
    // int col = 3;
    // int ans = LinearSearchIn2d(arr, row, col);
    // if(ans){
    //     cout<<"Key is present in this array"<<endl;
    // }
    // else{
    //     cout<<"Key is not present in this array"<<endl;
    // }

    //Row_Sum in 2D Array
    // int arr[3][3] = {{2,3,4}, {8, 9,7}, {5, 6, 1}};
    // int row = 3;
    // int col = 3;
    // for(int i =0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // RowSum(arr,row, col);

    //Sort Zero and One
    // vector<int>v = {0, 0, 1, 0, 1, 0, 1, 0};
    // int size = v.size() - 1;
    // sortZeroOne(v,size);

    //Triplet
    // vector<int>v = {10, 20, 30, 40, 50, 60};
    // int size = v.size() - 1;
    // int Triplet_Sum = 80;
    // tripletSum(v,size, Triplet_Sum);

    // //Pair-Sum
    // vector<int>V={1, 3, 5, 7, 2, 4, 6};
    // int size = V.size() - 1;
    // int Pair_Sum= 9;
    // pairSum(V, size, Pair_Sum);

    //Intersection of Array
    // vector<int>v1 = {9,7,6,2};
    // vector<int>v2 = {1,2, 3};
    // int sizeV1 = v1.size() -1;
    // int sizeV2 = v2.size() -1;
    // vector<int>InterSecionArray;
    // InterSectionOfTwoArray(v1, v2, sizeV1,sizeV2, InterSecionArray);

    //union of Array
    // vector<int>v1 = {1, 4, 3, 8};
    // vector<int>v2 = {5, 2, 9, 6};
    // int sizeV1 = v1.size() - 1;
    // int sizeV2 = v2.size() - 1;
    // vector<int>UnionArray;
    // UnionOfTwoArray(v1,v2,sizeV1,sizeV2,UnionArray);

    //Find Unique element 
    // vector<int>v = {1, 2, 2, 1, 6, 5, 5, 6, 4}; 
    // int size = v.size() - 1;
    // int ans = UniqueElement(v,size);
    // if(ans==0){
    //     cout<<"No unique Element in Vector"<<endl;
    // }
    // else{
    //     cout<<"Unique Element in Vector"<<" "<<ans;
    // }

    //ReverseArray 
    // vector<int>v = {2,4, 3, 6, 7,44};
    // int size = v.size() - 1;
    // int low = 0;
    // int high = size;
    // ReverseArray(v, size, low, high);

    //Extreme Print
    // vector<int>v = {2, 4, 1, 6, 8, 9, 10};
    // int size = v.size() - 1;
    // int low = 0;
    // int high = size;
    // ExtremePrint(v, low, high);

    //MaximumNumber of vector
    // vector<int>v = {2, 5, 1, 6, 7, 4, 12, 75, 45};
    // int size = v.size() - 1;
    // int maxi = INT_MIN;
    // MaxiNumber(v, size, maxi);
    // cout<<"Maximum Number of vector "<<maxi;

    //CountZeroOne
    // vector<int>v = {0, 0, 1, 1, 0, 1, 0};
    // int size = v.size() - 1;
    // int count_Zero = 0;
    // int count_One = 0;
    // CountOfZeroOne(v,size,count_One,count_Zero);

    //LinerSearch
    // vector<int>v = {2, 9, 3, 1, 8, 19, 20};
    // int size = v.size() -1;
    // int target;
    // cout<<"Enter the Element you want to search"<<endl;
    // cin>>target;
    // int ans  = LinearSearch(v,size, target);
    // if(ans){
    //     cout<<"Element is found"<<endl;
    // }
    // else{
    //     cout<<"Element is not found"<<endl;
    // }
}