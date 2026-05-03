int majorityElement(const int* A, int n1){ 
    int a=0;
    int count=0;
    int i;
    for(i=0;i<n1;i++){
        if(count==0){
           a=A[i];
        }
        if(A[i]==a){
            count++;
        }
        else{
            count--;
        }
        
    }
    
    
    return a;
    
}