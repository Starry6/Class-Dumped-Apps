@interface AWETeenU14NightLockDecisionTask : NSObject
@property (nonatomic) BOOL nightLockShowing;
@property (nonatomic) AWELockTimeUnPasswordViewController nightLockVC;
@property (nonatomic) Q originOrientationMask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)onGoing;
- (BOOL)triggerTask;
- (BOOL)willOnGoingWithinFiveMinutes;
- (void)setNightLockShowing:;
- (BOOL)nightLockShowing;
- (BOOL)shouldShowNightLock;
- (void)showNightLockIfNeeded;
- (void)dismissNightLockIfNeeded;
- (void)restoreOriginOrientation;
- (void)setNightLockVC:;
- (id)nightLockVC;
- (void)setOriginOrientationMask:;
- (unsigned long long)originOrientationMask;
- (void).cxx_destruct;
- (unsigned long long)taskID;
@end
