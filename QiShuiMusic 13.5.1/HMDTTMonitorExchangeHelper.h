@interface HMDTTMonitorExchangeHelper : NSObject
- (void)hmdTrackData:logTypeStr:;
- (void)hmdTrackData:type:;
- (void)hmdTrackService:attributes:;
- (void)hmdTrackService:status:extra:;
- (void)hmdTrackService:value:extra:;
+ (void)closeExchangeTTMonitor;
+ (void)exchangeTTMonitorInterfaceIfNeeded:;
+ (id)globalLock;
+ (void)setIsSwizzled:;
+ (void)startExchangeTTMonitor;
+ (BOOL)isSwizzled;
@end
