@interface BDAANightLockDecisionTask : NSObject
@property (nonatomic) BOOL nightLockShowing;
@property (nonatomic) BOOL nightLockNeedToShow;
@property (nonatomic) double lastUnlockTS;
@property (nonatomic) BDAAPasswordInputHandler nightLockHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)onGoing;
- (void)clearNightLockData;
- (void)dismissNightLockIfNeeded;
- (double)lastUnlockTS;
- (id)nightLockHandler;
- (BOOL)nightLockNeedToShow;
- (BOOL)nightLockShowing;
- (void)readLastUnlockTS;
- (void)setLastUnlockTS:;
- (void)setNightLockHandler:;
- (void)setNightLockNeedToShow:;
- (void)setNightLockShowing:;
- (BOOL)shouldShowNightLock;
- (void)showNightLockIfNeeded;
- (void)teenModeDidChange:;
- (BOOL)triggerTask;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)taskID;
@end
