@interface VPVRCamera : NSObject
@property (nonatomic) BOOL gyroEnabled;
@property (nonatomic) double gyroSensitivity;
@property (nonatomic) BOOL shouldUseRequiredInterfaceOrientation;
@property (nonatomic) q requiredInterfaceOrientation;
- (double)gyroSensitivity;
- (void)setGyroEnabled:;
- (id)appliedQuaternion;
- (BOOL)isGyroEnabled;
- (id)lookAtWithEye:front:up:;
- (id)lookAtWithEye:front:up:shouldApplyGyroPose:;
- (id)perspectiveWithFovy:aspectRatio:nearZ:farZ:;
- (void)recenter;
- (void)setGyroSensitivity:;
- (void)setRequiredInterfaceOrientation:;
- (void)setShouldUseRequiredInterfaceOrientation:;
- (BOOL)shouldUseRequiredInterfaceOrientation;
- (void)updateCameraPose;
- (void)updateCurrentViewportOrientation;
- (void)updateStatusBarOrientation;
- (int)viewportOrientationWithInterfaceOrientation:;
- (id)init;
- (void)dealloc;
- (long long)requiredInterfaceOrientation;
@end
