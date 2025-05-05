@interface SWSystemSleepMonitor : NSObject
@property (nonatomic) BOOL sleepRequested;
@property (nonatomic) BOOL sleepImminent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (void)addObserver:;
- (id)initWithIdentifier:queue:;
- (id)initWithIdentifier:queue:allowsInvalidation:monitorProvider:sleepAssertionProvider:;
- (void).cxx_destruct;
- (BOOL)isSleepImminent;
- (BOOL)hasSleepBeenRequested;
- (void)systemPowerChanged:notificationID:;
- (void)invalidate;
+ (id)monitorUsingMainQueue;
@end
