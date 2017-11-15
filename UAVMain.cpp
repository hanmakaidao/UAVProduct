#include<stdlib.h>
#include<stdio.h>
//./UAVProcess#include "gtest/gtest.h"
#include "UAVPreProcess.h"
int main(int argc,char* argv[])
{
    std::string sfm_data="/home/wuwei/Data/UAVData/9/sfm.json";
    std::string dFeature="/home/wuwei/Data/UAVData/9/feats/";
    std::string strMatchList="/home/wuwei/Data/UAVData/9/matches.txt";
    std::string strMatch="/home/wuwei/Data/UAVData/9/feats/matches.txt";

    UAVProcessFeatureSIFT *feats=new UAVProcessFeatureSIFT();
    UAVErr err=0;
    err=feats->UAVProcessFeatList(sfm_data,dFeature);
    err=feats->UAVProcessFeatExtract(true);
    return err;
    //testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
}

