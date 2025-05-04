@interface AWEMonitorProtocolImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)monitorLogWithEvent:params:;
- (void)willMonitor:params:;
- (void)async:;
@end
