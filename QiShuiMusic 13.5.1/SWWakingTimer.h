@interface SWWakingTimer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL scheduled;
@property (nonatomic) double timeRemaining;
- (void)cancel;
- (void)dealloc;
- (void)systemSleepMonitor:prepareForSleepWithCompletion:;
- (id)identifier;
- (BOOL)isScheduled;
- (void)scheduleWithFireInterval:leewayInterval:queue:handler:;
- (double)timeRemaining;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (void)invalidate;
- (void)scheduleForDate:leewayInterval:queue:handler:;
- (void)systemSleepMonitor:sleepRequestedWithResult:;
- (id)initWithIdentifier:sleepMonitor:sleepAssertionProvider:;
@end
