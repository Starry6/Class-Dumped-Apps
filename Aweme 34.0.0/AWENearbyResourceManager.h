@interface AWENearbyResourceManager : NSObject
- (void)trackDialogRequestMonitor:error:pageType:;
- (void)trackNearbyCommonRequestMonitorEvent:errMsg:reqTime:model:extraParam:;
- (void)requestNearbyResourceWithRefreshType:pageType:rowType:feedParams:extraParams:completion:;
- (void)configTaskWithModel:pageType:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
