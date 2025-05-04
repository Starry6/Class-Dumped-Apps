@interface AWEOfflineVideoSettingManager : NSObject
+ (BOOL)logEnable;
+ (long long)playFailedTimeInterval;
+ (BOOL)serializationOptimizeEnable;
+ (BOOL)filterErrorCode_1003;
+ (double)cacheVideoCDNRetryMaxTime;
+ (double)cacheVideoMaxSizeWhenShowPopup;
@end
