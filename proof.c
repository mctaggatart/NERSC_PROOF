#include <iostream>
using namespace std;
//proof.c
//this code runs the benchmarks
void  proof(){
TStopwatch t;//create the timer object
   t.Start();//start the timer
   //change directory
  gEnv->SetValue("ProofLite.Sandbox","/scratch2/scratchdirs/amct");
   TProofBench pb("");
   //change comment to whatever you want
   //  pb.MakeDataSet();
   //  pb.RunDataSet("BenchDataSet",1,24,1);
     pb.RunCPU(1000000,1,24,1);
   t.Stop();
   t.Print();
   //print name of directory for ease of use. Can also add Ttimer events.
    cout << "/scratch2/scratchdirs/amct" << endl;
}
