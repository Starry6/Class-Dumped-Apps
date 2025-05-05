@interface CKTapToRadarManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> alertQueue;
@property (nonatomic) NSUserDefaults userDefaults;
@property (nonatomic) NSMutableDictionary lastPromptDateByMessageHash;
- (void)setUserDefaults:;
- (id)init;
- (void)setAlertQueue:;
- (id)userDefaults;
- (id)alertQueue;
- (void).cxx_destruct;
- (id)_init;
- (id)_hashForMessage:;
- (id)_lastPromptDateForMessage:;
- (void)_notePromptAttemptForMessage:;
- (void)_launchTTRWithRequest:;
- (void)_lockedTriggerTapToRadarWithRequest:;
- (void)triggerTapToRadarWithRequest:;
- (id)lastPromptDateByMessageHash;
- (void)setLastPromptDateByMessageHash:;
+ (id)sharedManager;
@end
