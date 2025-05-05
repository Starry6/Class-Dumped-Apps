@interface PLCameraCaptureTaskConstraintCoordinator : NSObject
@property (nonatomic) q role;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_startWatchingCameraActivity;
- (void)activateCameraSessionTaskConstraints;
- (void)_startSessionFailsafeTimer;
- (void)_deactivateCameraSessionTaskConstraintsAfterDelay:;
- (void)deactivateCameraSessionTaskConstraints;
- (id)initWithTaskContstraintRole:name:;
- (void).cxx_destruct;
- (void)_invalidateTransactionAndStopConstrainingTasksWithDelayedDeactivation:;
- (void)cameraWatcherDidChangeState:;
- (void)_cancelSessionFailsafeTimer;
- (long long)role;
- (id)description;
- (id)sessionStatusDescription;
- (void)updateConstraintsForCameraRollViewVisible:;
- (void)invalidate;
- (void)_activateCameraSessionTaskConstraints;
+ (BOOL)_shouldUseFailsafeTimerForRole:;
+ (id)taskConstraintStatus;
+ (BOOL)_shouldWatchCameraViewfinderForRole:;
@end
