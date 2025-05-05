@interface PLConstraintsDirector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)informCameraAppCameraViewControllerVisibilityChanged:;
- (void)_disableAutoFGAndUserFGConstraints;
- (id)initWithPhotoAnalysisClient:photoLibraryURL:;
- (void)foregroundMonitor:changedStateToForeground:forBundleIdentifier:;
- (void).cxx_destruct;
- (void)cameraWatcherDidChangeState:;
- (BOOL)shouldScheduleUserInitiatedAnalysisForAssets;
- (void)informCameraAppForegroundState:;
- (void)_requestMediaAnalysisQuickFaceProcessing;
+ (BOOL)constraintsAllowSchedulingUserInitiatedAnalysisForAssets;
+ (BOOL)_photoanalysisdIsRunning;
@end
