

    +Anastasia
    Search
    Images
    Maps
    Play
    YouTube
    News
    Gmail
    Drive
    Calendar
    More

    apmctaggart@gmail.com
     Share
    Anastasia McTaggart
    Anastasia McTaggart
    Anastasia McTaggart
    Anastasia McTaggart
    Anastasia McTaggart
    Ana McTaggart
    	

Drive
0% full
Manage
		
Did you mean: macro 4
	
	
	
Title
	
Owner
	
Last modified
You have exited the viewer
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
//this code prints all histograms to the gif
void  allhistos(){
TFile *fileL = new TFile("data/Level2_HESE_nugen_nue_IC86.2011.009250.000xxx_All.root");
fileL->cd();
    TCanvas *myCanvas = new TCanvas();
TTree* MyTree;fileL->GetObject("Mreco",MyTree);
 Int_t nevent = MyTree->GetNbranches();
  Int_t nselected = 0;
const char * tempName;
     for (Int_t i=0;i<nevent;i++{

tempName=MyTree->GetListOfBranches()->UncheckedAt(i)->GetName();  

myCanvas->cd();
MyTree->Draw(tempName);
//file format easily changed
strcat(tempName,".eps");
myCanvas->SaveAs(tempName);

 }


}
