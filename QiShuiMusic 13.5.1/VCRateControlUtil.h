@interface VCRateControlUtil : NSObject
+ (BOOL)calculateCongestionMetricsFromOWRDList:owrd:time:config:isInitialRampUp:;
+ (BOOL)prepareOWRDList:owrd:time:config:;
+ (void)calculateNOWRDWithOWRDList:config:isInitialRampUp:;
+ (void)calculateNOWRDShortWithOWRDList:config:isInitialRampUp:;
+ (double)calculateNOWRDWithDuration:owrdList:historySize:minHistorySize:initalRampUpReadyDuration:isInitialRampUp:;
+ (void)calculateNOWRDAccWithOWRDList:config:;
@end
