class Polynomial {
  
    
  public :
    int *degCoeff; 
    int capacity;
  
  Polynomial(){
    capacity=5;
    degCoeff=new int[capacity];
    for(int i=0;i<capacity;i++){
      degCoeff[i]=0;
    }
  }
  
  Polynomial(Polynomial const &P1){
    
   
      int* degCoeff=new int[P1.capacity];
      for(int i=0;i<P1.capacity;i++){
        degCoeff[i]=P1.degCoeff[i];
      }
      
      capacity=P1.capacity;
      
  
  }
  
  
  void setCoefficient(int d,int coeff){
    
    if(d>=capacity){
    int k=d+1;
      int* newarr=new int[k];
      for(int i=0;i<k;i++){
        newarr[i]=0;
      }
      for(int i=0;i<capacity;i++)
      {
        if(degCoeff[i]!=0)
          newarr[i]=degCoeff[i];
      } 
    delete [] degCoeff;
      degCoeff=newarr;
      capacity = k;
      degCoeff[d]=coeff;
      
    }
    else
      degCoeff[d]=coeff;
    
  }
  
  Polynomial add(Polynomial const &P1){
    Polynomial P;
    int a,b;
    if(capacity>=P1.capacity){
      a=capacity;
      b=0;
    } 
    else{
      a=P1.capacity;
      b=1;
    }
      
    P.setCoefficient(a,0);
    int i,j=0;
    if(b==0){
      
      while(i<capacity && j<P1.capacity)
      {
        P.degCoeff[i]=degCoeff[i]+P1.degCoeff[j];
        i++;
        j++;
      }
      
      while(i<capacity)
      {
        P.degCoeff[i]=degCoeff[i];
        i++;
      }
    
    }
    
     if(b==1){
      
      while(i<capacity && j<P1.capacity)
      {
        P.degCoeff[j]=degCoeff[i]+P1.degCoeff[j];
        i++;
        j++;
      }
      
      while(j<P1.capacity)
      {
        P.degCoeff[j]=P1.degCoeff[j];
        j++;
      }
    
    }
    
   
    return P;
  }
  
    Polynomial subtract(Polynomial const &P1){
    
        Polynomial P;
    int a,b;
    if(capacity>=P1.capacity){
      a=capacity;
      b=0;
    } 
    else{
      a=P1.capacity;
      b=1;
    }
      
    P.setCoefficient(a,0);
    int i,j=0;
    if(b==0){
      
      while(i<P.capacity && j<P1.capacity)
      {
        P.degCoeff[i]=degCoeff[i]-P1.degCoeff[j];
        i++;
        j++;
      }
      
      while(i<P.capacity)
      {
        P.degCoeff[i]=degCoeff[i];
        i++;
      }
    
    }
    
     if(b==1){
      
      while(i<P.capacity && j<P1.capacity)
      {
        P.degCoeff[j]=degCoeff[i]-P1.degCoeff[j];
        i++;
        j++;
      }
      
      while(j<P1.capacity)
      {
        P.degCoeff[j]=-P1.degCoeff[j];
        j++;
      }
    
    }
      
      return P;
  }
  
  Polynomial multiply(Polynomial const &P1){
    Polynomial P;
    int a=capacity+P1.capacity;
    P.setCoefficient(a,0);
    for(int i=0;i<capacity;i++){
      for(int j=0;j<P1.capacity;j++){
        if(degCoeff[i]!=0 && P1.degCoeff[j]!=0){
          P.degCoeff[i+j]+=degCoeff[i]*P1.degCoeff[j];
        }
            
      }
    }
    return P;
  }
  
  void operator=(Polynomial const &P){
    
    int* newarr=new int[P.capacity];
    for(int i=0;i<P.capacity;i++){
      newarr[i]=0;
    }
    
     for(int i=0;i<P.capacity;i++){
      if(P.degCoeff[i]!=0)
      {
        newarr[i]=P.degCoeff[i];
      }
    }
   delete [] degCoeff;
    degCoeff=newarr;
    
  }
  
  void print(){
    for(int i=0;i<capacity;i++){
      if(degCoeff[i]!=0){
        cout<<degCoeff[i]<<"x"<<i<<" ";
      }
    }
  }
  

};
