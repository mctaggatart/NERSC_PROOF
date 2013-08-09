//this code draws multiple histograms
//from http://home.fnal.gov/~kalanand/roottips.html
TCanvas* drawmulti(TString plotname, TH1& h1, TString label1,
                          TH1& h2, TString label2, TH1& h3, TString label3,
                          TH1& h4, TString label4, float x0=0.63, 
                          float y0=0.8, float x1=0.9, float y1=0.9) {
  
    TCanvas* can = new TCanvas( plotname, plotname, 500, 500 );
    h1.Draw("Hist e");  
    h2.Draw("Hist esame"); 
    h3.Draw("Hist esame");
    h4.Draw("Hist esame");
    TLegend* leg = new TLegend(x0,y0,x1,y1);
     leg->AddEntry( &h1, label1,"L"); 
    leg->AddEntry( &h2, label2,"L"); 
    leg->AddEntry( &h3, label3,"L"); 
    leg->AddEntry( &h4, label4,"L"); 
    leg->SetMargin(0.15);
    leg->SetFillColor(0);
    leg->Draw();
    // gPad->SetLogy();
    // gPad->SetGridx(); 
  
    //   can->SaveAs( plotname+TString(".eps") ); 
       can->SaveAs( plotname+TString(".gif") );  
    //    can->SaveAs( plotname+TString(".root") );
    return can; 
  }
