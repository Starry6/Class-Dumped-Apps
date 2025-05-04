@interface AWEPzABSettings : NSObject
+ (BOOL)enablePreloadLocalDomainConfig;
+ (BOOL)enablePreloadDatabase;
+ (BOOL)enablePizzaSwiftImpl;
+ (BOOL)requestForbid;
+ (BOOL)frameForbid;
+ (id)connectChangeRequestConfig;
+ (long long)dataRequestInterval;
+ (long long)dbCleanInterval;
+ (BOOL)trackForbid;
+ (double)connectChangeRequestTimeIntervalS;
+ (BOOL)connectChangeRequestDowngradeEnable;
+ (BOOL)enableTrackComponentAction;
+ (BOOL)enableTrackDowngradeStrategy;
+ (BOOL)enableTrackParseLocalData;
+ (BOOL)enableTrackDBTrace;
+ (BOOL)enableTrackStrategyCostMap;
@end
