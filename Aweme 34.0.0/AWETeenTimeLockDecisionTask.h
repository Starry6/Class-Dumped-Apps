@interface AWETeenTimeLockDecisionTask : NSObject
@property (nonatomic) BOOL timeLockShowing;
@property (nonatomic) BOOL timeLockNeedToShow;
@property (nonatomic) UIViewController<AWETeenProtectionLockViewControllerProtocol> timeLockVC;
@property (nonatomic) Q originOrientationMask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)teenModeDidChange:isLogout:;
- (BOOL)onGoing;
- (BOOL)triggerTask;
- (BOOL)willOnGoingWithinFiveMinutes;
- (void)restoreOriginOrientation;
- (void)setOriginOrientationMask:;
- (unsigned long long)originOrientationMask;
- (BOOL)timeLockShowing;
- (BOOL)timeLockNeedToShow;
- (unsigned long long)todaysTimeLockLimit;
- (void)clearLockTimeIfNeeded;
- (void)showTimeLockIfNeeded;
- (void)dismissTimeLockIfNeeded;
- (void)setTimeLockNeedToShow:;
- (void)setTimeLockShowing:;
- (void)setTimeLockVC:;
- (id)timeLockVC;
- (void).cxx_destruct;
- (unsigned long long)taskID;
@end
