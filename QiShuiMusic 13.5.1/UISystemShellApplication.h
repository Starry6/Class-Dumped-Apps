@interface UISystemShellApplication : UIApplication
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:willAnimateWithSettings:fromOrientation:;
- (void)resetIdleTimerAndUndim;
- (id)init;
- (BOOL)_saveSnapshotWithName:;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)canOpenURL:;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:;
- (BOOL)_openURL:;
- (BOOL)handleStatusBarHoverActionForRegion:;
- (long long)startupInterfaceOrientation;
- (long long)_interfaceOrientationRotationDirectionFromOrientation:toOrientation:;
- (BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:;
- (BOOL)isFrontBoard;
- (BOOL)isSuspendedUnderLock;
- (BOOL)isSuspended;
- (void).cxx_destruct;
+ (BOOL)registerAsSystemApp;
+ (BOOL)rendersLocally;
@end
