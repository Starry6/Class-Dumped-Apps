@interface BDHMInnerEventListener : NSObject
@property (nonatomic) NSMutableArray listeners;
@property (nonatomic) BOOL disableMonitorLaunch;
- (BOOL)disableMonitorLaunch;
- (void)dispathEvent:;
- (void)setDisableMonitorLaunch:;
- (void)setListeners:;
- (id)listeners;
- (void)registerListener:;
- (void).cxx_destruct;
+ (id)shared;
@end
