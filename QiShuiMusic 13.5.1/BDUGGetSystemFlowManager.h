@interface BDUGGetSystemFlowManager : NSObject
+ (double)flowStatisticsEndTime;
+ (double)flowStatisticsStartTime;
+ (long long)getCurrentTotalUsingFlow;
+ (long long)getCurrentUsingFlow;
+ (id)getPrivateIpAddress;
+ (id)localCacheFlowConsumption;
+ (void)reportSuccessAndClearCacheConsumption;
+ (void)resetFlowData;
+ (void)saveFlowInfoToCache:;
+ (void)startStatisticsFlow;
+ (void)startStatisticsFlowAfterSettings;
+ (void)updateInfo;
@end
