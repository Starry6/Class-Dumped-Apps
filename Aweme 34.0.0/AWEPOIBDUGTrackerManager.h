@interface AWEPOIBDUGTrackerManager : NSObject
+ (void)trackBDUGConsumeWithType:POIInfo:logPassback:;
+ (id)headerParametersWithTimestamp:;
+ (id)bodyParametersWithType:POIInfo:logPassback:timestamp:;
+ (unsigned long long)timestamp;
+ (unsigned long long)versionCode;
@end
