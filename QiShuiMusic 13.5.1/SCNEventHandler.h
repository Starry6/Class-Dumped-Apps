@interface SCNEventHandler : NSObject
@property (nonatomic) SCNView view;
@property (nonatomic) BOOL enableFreeCamera;
@property (nonatomic) BOOL autoSwitchToFreeCamera;
@property (nonatomic) SCNNode freeCamera;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)view;
- (void)setView:;
- (id)gestureRecognizers;
- (void)sceneWillChange;
- (void)cameraWillChange;
- (void)sceneDidChange;
- (void)cameraDidChange;
- (void)viewWillDrawAtTime:;
- (void)viewDidDrawAtTime:;
- (BOOL)wantsRedraw;
- (id)freeCamera;
- (BOOL)enableFreeCamera;
- (void)setEnableFreeCamera:;
- (BOOL)autoSwitchToFreeCamera;
- (void)setAutoSwitchToFreeCamera:;
- (void)activateFreeCamera;
@end
