@interface AWEUGPushPermissionReporter : NSObject
@property (nonatomic) MMKV mmkv;
- (void)setMmkv:;
- (id)mmkv;
- (void)reportPushPermissionChangeIfNeeded;
- (void)p_trackNotifiationPermissionChangeTo:from:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
