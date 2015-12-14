#include <iostream>
#include <cmath>
#include <fstream>



using namespace std;

void arenstorf(double* yt, double* y, double* dy, const double mu1, const double mu2);

int main(void){
  
  ofstream out("solution");
  
  const double mu1 = 0.012277471;
  const double mu2 = 1- mu;
  double k1[2];
  double k2[2];
  double k3[2];
  double k4[2];  
  double k5[2];
  double k6[2];  
  double k7[2];
  double y[2];
  double dy[2];
  double ytemp[2];
  double z[2];
  double ztemp[2];
  double error;						//local error = ||z[i]-y[i]||
  
  y[0]=0.994;
  y[1]=0.0;
  dy[0]=0.0;
  dy[1]=-2.00158510637908;
  
  
  
 out.close(); 
 return(0); 
}

void arenstorf(double* yt, double* y, double* dy, const double mu1, const double mu2){
 
 double r = sqrt(pow(y[0]+mu1,2.0)+pow(y[1],2.0));
 double s = sqrt(pow(y[0]-1+mu1,2.0)+pow(y[1],2.0));
  
 yt[0]=y[0]+2.0*dy[1]-(mu2*(y[0]+mu1)/pow(r,3.0))-(mu1*(y[0]-y+mu1)/pow(s,3.0));
 yt[1]=y[1]-2.0*dy[0]-(mu2*y[1]/pow(r,3.0))-(mu1*y[1]/pow(s,3.0));
  
}