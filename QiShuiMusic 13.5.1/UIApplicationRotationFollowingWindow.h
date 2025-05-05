@interface UIApplicationRotationFollowingWindow : UIWindow
@property (nonatomic) q priorityLevel;
@property (nonatomic) BOOL limitToWindowLevel;
- (id)initWithWindowScene:;
- (id)init;
- (id)_initWithFrame:debugName:windowScene:;
- (BOOL)_shouldAutorotateToInterfaceOrientation:;
- (id)_initWithFrame:attached:;
- (BOOL)_shouldControlAutorotation;
- (id)__autorotationSanityCheckObjectFromSource:selector:;
- (id)_topMostWindow;
- (id)_initWithFrame:debugName:attached:;
- (id)_initWithFrame:debugName:scene:attached:;
- (id)_initWithFrame:debugName:displayConfiguration:;
- (BOOL)isInterfaceAutorotationDisabled;
- (void)_commonApplicationRotationFollowingWindowInit;
- (void)setPriorityLevel:;
- (void)applicationWindow:didRotateWithOrientation:duration:;
- (void)_handleStatusBarOrientationChange:;
- (long long)priorityLevel;
- (BOOL)limitToWindowLevel;
- (void)setLimitToWindowLevel:;
+ (BOOL)_isSystemWindow;
@end
