@interface BDUGAccountNetworkHelper : NSObject
+ (unsigned long long)carrierType;
+ (unsigned long long)carrierTypeUseOldMethod;
+ (long long)currentDataCellular;
+ (long long)fastDetectActiveIfAddrsStatus;
+ (BOOL)isOpenDataOfCellular:;
+ (unsigned long long)networkType;
@end
