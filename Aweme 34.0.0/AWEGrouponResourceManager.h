@interface AWEGrouponResourceManager : NSObject
- (void)trackDialogRequestMonitor:error:pageType:;
- (void)trackNearbyCommonRequestMonitorEvent:errMsg:reqTime:model:extraParam:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
