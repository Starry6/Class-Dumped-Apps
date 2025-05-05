@interface PAProcessStateMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)startMonitoringVisibilityStateForBundleIdentifiers:onQueue:withDelegate:;
+ (id)sharedInstance;
@end
