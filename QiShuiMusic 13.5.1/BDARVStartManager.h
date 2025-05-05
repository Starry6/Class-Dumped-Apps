@interface BDARVStartManager : NSObject
- (void)startWithAppID:;
- (void)sdkSessionLaunchMonitor;
+ (id)sharedInstance;
@end
