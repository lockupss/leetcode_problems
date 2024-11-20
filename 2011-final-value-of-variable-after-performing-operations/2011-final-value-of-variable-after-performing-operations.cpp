class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int size= operations.size();
        int a=0;
        for(int i=0; i<=size-1; i++){
           
        if(operations[i]=="--X"){
            a = a - 1;}
        else if(operations[i]=="++x"){
            a = a + 1;
        }
        else if(operations[i]=="X--"){
            a = a - 1;
        }
        else{
             a = a + 1;
        }
        }
        return a;
    }
};