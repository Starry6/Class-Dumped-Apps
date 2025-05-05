@interface UIApplicationRotationFollowingControllerNoTouches : UIApplicationRotationFollowingController
- (void)_prepareForRotationToOrientation:duration:;
- (void)_finishRotationFromInterfaceOrientation:;
- (void)loadView;
- (void)_rotateToOrientation:duration:;
@end
