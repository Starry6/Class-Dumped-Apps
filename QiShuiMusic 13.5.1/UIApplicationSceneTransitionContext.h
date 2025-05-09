@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext
@property (nonatomic) Q lifecycleActionType;
@property (nonatomic) NSDictionary payload;
@property (nonatomic) BOOL forTesting;
@property (nonatomic) BOOL safeMode;
@property (nonatomic) double userLaunchEventTime;
@property (nonatomic) double execTime;
@property (nonatomic) Q signpostID;
@property (nonatomic) BOOL shouldTakeKeyboardFocus;
@property (nonatomic) BOOL waitForBackgroundTaskCompletion;
@property (nonatomic) UISClickAttribution clickAttribution;
@property (nonatomic) UISPasteSharingToken pasteSharingToken;
@property (nonatomic) q statusBarAnimation;
@property (nonatomic) BOOL disableTouchCancellationOnRotation;
- (id)payload;
- (unsigned long long)signpostID;
- (void)setPayload:;
- (id)valueDescriptionForFlag:object:ofSetting:;
- (void)setSignpostID:;
- (id)keyDescriptionForSetting:;
- (id)clickAttribution;
- (void)setClickAttribution:;
- (id)pasteSharingToken;
- (void)setPasteSharingToken:;
- (BOOL)isUISubclass;
- (BOOL)forTesting;
- (void)setForTesting:;
- (BOOL)safeMode;
- (void)setSafeMode:;
- (double)userLaunchEventTime;
- (void)setUserLaunchEventTime:;
- (double)execTime;
- (void)setExecTime:;
- (BOOL)shouldTakeKeyboardFocus;
- (void)setShouldTakeKeyboardFocus:;
- (BOOL)waitForBackgroundTaskCompletion;
- (void)setWaitForBackgroundTaskCompletion:;
- (long long)statusBarAnimation;
- (void)setStatusBarAnimation:;
- (BOOL)disableTouchCancellationOnRotation;
- (void)setDisableTouchCancellationOnRotation:;
- (void)_setLifecycleActionType:;
- (unsigned long long)_lifecycleActionType;
@end
