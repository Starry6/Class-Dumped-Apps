@interface SCNCameraNavigationController : NSObject
@property (nonatomic) SCNCameraController cameraController;
@property (nonatomic) <SCNCameraNavigationControllerDelegate> delegate;
@property (nonatomic) Q stickyAxis;
@property (nonatomic) {SCNVector3=fff} cameraTarget;
@property (nonatomic) BOOL gimbalLockMode;
@property (nonatomic) BOOL enableInertia;
@property (nonatomic) double friction;
@property (nonatomic) BOOL automaticCameraTarget;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL enableFreeCamera;
@property (nonatomic) SCNNode freeCamera;
@property (nonatomic) SCNView view;
@property (nonatomic) BOOL autoSwitchToFreeCamera;
@property (nonatomic) BOOL allowsTranslation;
@property (nonatomic) double flyModeVelocity;
@property (nonatomic) double panSensitivity;
@property (nonatomic) double truckSensitivity;
@property (nonatomic) double rotationSensitivity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_handlePan:;
- (double)friction;
- (void)_handlePinch:;
- (id)initWithView:;
- (void)dealloc;
- (BOOL)enabled;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setDelegate:;
- (void)setZoomFactor:;
- (id)pointOfView;
- (double)zoomFactor;
- (void)_handleDoubleTap:;
- (id)view;
- (id)delegate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)setView:;
- (void)setFriction:;
- (id).cxx_construct;
- (id)gestureRecognizers;
- (void)_handlePress:;
- (id)cameraController;
- (float)_targetDistance;
- (void)cameraInertiaWillStartForController:;
- (id)worldFront;
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
- (void)_handleRotation:;
- (BOOL)allowsTranslation;
- (void)setAllowsTranslation:;
- (BOOL)enableInertia;
- (void)setEnableInertia:;
- (BOOL)gimbalLockMode;
- (void)setGimbalLockMode:;
- (id)gimbalLockVector;
- (void)setGimbalLockVector:;
- (BOOL)automaticCameraTarget;
- (void)invalidateCameraTarget;
- (void)setAutomaticCameraTarget:;
- (id)cameraTarget;
- (void)setCameraTarget:;
- (void)focusNode:;
- (unsigned long long)stickyAxis;
- (void)setStickyAxis:;
- (void)_resetFreeViewCamera;
- (BOOL)_freeCameraActivated;
- (void)_prepareFreeViewCamera;
- (void)_installFreeViewCameraIfNeeded;
- (void)_switchToFreeViewCamera;
- (id)cameraAutomaticTargetPoint;
- (float)_translationCoef;
- (void)rotateOf:;
- (void)zoomBy:animate:;
- (void)zoomBy:;
- (void)translateByX:Y:Z:;
- (void)_startBrowsingIfNeeded:;
- (void)beginGesture:;
- (void)rotateWithGestureRecognizer:;
- (void)pinchWithGestureRecognizer:;
- (void)panWithGestureRecognizer:;
- (double)flyModeVelocity;
- (void)setFlyModeVelocity:;
- (double)panSensitivity;
- (void)setPanSensitivity:;
- (double)truckSensitivity;
- (void)setTruckSensitivity:;
- (double)rotationSensitivity;
- (void)setRotationSensitivity:;
- (void)cameraInertiaDidEndForController:;
- (void)focusNodes:;
- (unsigned long long)_effectiveStickyAxis;
- (float)_cappedTranslationDelta:;
- (float)_orthographicZoomFactorForProposedZoomFactor:;
- (float)_orthographicScaleForZoomFactor:;
- (void)_setupUpVector;
- (void)_willBeginInteraction;
- (void)_stopInertia;
- (double)_modeSensitivity;
- (id)_defaultTargetForScene:;
- (void)_computeAutomaticTargetPointIfNeeded;
- (id)_sceneBoundingSphere;
- (BOOL)_computeBoundingSphereOmittingFloorsForNode:sphere:;
- (void)_computeStickyAxisIfNeeded:;
- (float)_pointOfViewOrthographicScale;
- (void)_setPointOfViewOrthographicScale:;
- (BOOL)_pointOfViewUsesOrthographicProjection;
- (void)_computeTranslationOrigin3DFromPoint:;
- (void)_translateToViewPoint:;
- (void)__willChangePointOfView;
- (void)__didChangePointOfView;
@end
