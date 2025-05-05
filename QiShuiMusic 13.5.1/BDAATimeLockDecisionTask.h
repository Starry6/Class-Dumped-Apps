@interface BDAATimeLockDecisionTask : NSObject
@property (nonatomic) BOOL timeLockShowing;
@property (nonatomic) BOOL timeLockNeedToShow;
@property (nonatomic) BDAAPasswordInputHandler timeLockHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)onGoing;
- (id)timeLockHandler;
- (BOOL)timeLockShowing;
- (void)clearLockTimeIfNeeded;
- (void)dismissTimeLockIfNeeded;
- (void)setTimeLockHandler:;
- (void)setTimeLockNeedToShow:;
- (void)setTimeLockShowing:;
- (void)showTimeLockIfNeeded;
- (BOOL)timeLockNeedToShow;
- (BOOL)triggerTask;
- (void).cxx_destruct;
- (unsigned long long)taskID;
@end
