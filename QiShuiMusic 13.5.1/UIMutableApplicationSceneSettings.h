@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings
@property (nonatomic) BOOL pg_hasVisiblePIPContent;
@property (nonatomic) NSString persistenceIdentifier;
@property (nonatomic) BOOL underLock;
@property (nonatomic) Q statusBarStyleOverridesToSuppress;
@property (nonatomic) Q deactivationReasons;
@property (nonatomic) q userInterfaceStyle;
@property (nonatomic) NSNumber forcedStatusBarStyle;
@property (nonatomic) BOOL forcedStatusBarForegroundTransparent;
@property (nonatomic) BOOL deviceOrientationEventsEnabled;
@property (nonatomic) BOOL canShowAlerts;
@property (nonatomic) BOOL idleModeEnabled;
@property (nonatomic) BOOL statusBarDisabled;
@property (nonatomic) {UIEdgeInsets=dddd} peripheryInsets;
@property (nonatomic) q statusBarParts;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} statusBarAvoidanceFrame;
@property (nonatomic) double statusBarHeight;
@property (nonatomic) double systemMinimumMargin;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsetsPortrait;
@property (nonatomic) double homeAffordanceOverlayAllowance;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsetsLandscapeLeft;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsetsPortraitUpsideDown;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsetsLandscapeRight;
@property (nonatomic) q deviceOrientation;
@property (nonatomic) Q artworkSubtype;
@property (nonatomic) BSCornerRadiusConfiguration cornerRadiusConfiguration;
@property (nonatomic) I hostContextIdentifierForSnapshotting;
@property (nonatomic) Q scenePresenterRenderIdentifierForSnapshotting;
@property (nonatomic) q accessibilityContrast;
@property (nonatomic) q pointerLockStatus;
@property (nonatomic) q interfaceOrientationMode;
@property (nonatomic) <BSInterfaceOrientationMapResolving><BSXPCSecureCoding> interfaceOrientationMapResolver;
@property (nonatomic) q screenReferenceDisplayModeStatus;
@property (nonatomic) BOOL enhancedWindowingEnabled;
@property (nonatomic) NSSet targetOfEventDeferringEnvironments;
@property (nonatomic) BOOL _debugValidationOrientationMaskEnabled;
@property (nonatomic) BOOL inLiveResize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)pg_hasVisiblePIPContent;
- (void)setPg_hasVisiblePIPContent:;
- (id)persistenceIdentifier;
- (long long)statusBarParts;
- (void)setDeviceOrientation:;
- (void)setStatusBarHeight:;
- (double)statusBarHeight;
- (id)statusBarAvoidanceFrame;
- (id)peripheryInsets;
- (void)setSafeAreaInsetsPortrait:;
- (unsigned long long)statusBarStyleOverridesToSuppress;
- (void)setUserInterfaceStyle:;
- (void)setSafeAreaInsetsLandscapeLeft:;
- (void)setSafeAreaInsetsPortraitUpsideDown:;
- (void)setHomeAffordanceOverlayAllowance:;
- (void)setPeripheryInsets:;
- (id)cornerRadiusConfiguration;
- (void)setStatusBarParts:;
- (id)safeAreaInsetsLandscapeLeft;
- (long long)deviceOrientation;
- (long long)userInterfaceStyle;
- (void)setInLiveResize:;
- (double)systemMinimumMargin;
- (double)homeAffordanceOverlayAllowance;
- (id)valueDescriptionForFlag:object:ofSetting:;
- (void)setPersistenceIdentifier:;
- (double)defaultStatusBarHeightForOrientation:;
- (void)setStatusBarStyleOverridesToSuppress:;
- (void)setStatusBarAvoidanceFrame:;
- (void)setCornerRadiusConfiguration:;
- (void)setSystemMinimumMargin:;
- (id)safeAreaInsetsPortrait;
- (id)safeAreaInsetsLandscapeRight;
- (void)setSafeAreaInsetsLandscapeRight:;
- (id)safeAreaInsetsPortraitUpsideDown;
- (id)keyDescriptionForSetting:;
- (id)copyWithZone:;
- (unsigned long long)artworkSubtype;
- (BOOL)deviceOrientationEventsEnabled;
- (BOOL)isUISubclass;
- (void)setDeviceOrientationEventsEnabled:;
- (BOOL)underLock;
- (unsigned long long)deactivationReasons;
- (id)forcedStatusBarStyle;
- (BOOL)forcedStatusBarForegroundTransparent;
- (BOOL)canShowAlerts;
- (BOOL)idleModeEnabled;
- (BOOL)statusBarDisabled;
- (unsigned int)hostContextIdentifierForSnapshotting;
- (unsigned long long)scenePresenterRenderIdentifierForSnapshotting;
- (long long)accessibilityContrast;
- (long long)pointerLockStatus;
- (long long)interfaceOrientationMode;
- (id)interfaceOrientationMapResolver;
- (long long)screenReferenceDisplayModeStatus;
- (BOOL)enhancedWindowingEnabled;
- (id)targetOfEventDeferringEnvironments;
- (BOOL)_debugValidationOrientationMaskEnabled;
- (BOOL)inLiveResize;
- (void)setUnderLock:;
- (void)setDeactivationReasons:;
- (void)setForcedStatusBarStyle:;
- (void)setForcedStatusBarForegroundTransparent:;
- (void)setDefaultStatusBarHeight:forOrientation:;
- (void)setCanShowAlerts:;
- (void)setIdleModeEnabled:;
- (void)setStatusBarDisabled:;
- (void)setArtworkSubtype:;
- (void)setHostContextIdentifierForSnapshotting:;
- (void)setScenePresenterRenderIdentifierForSnapshotting:;
- (void)setAccessibilityContrast:;
- (void)setPointerLockStatus:;
- (void)setInterfaceOrientationMode:;
- (void)setScreenReferenceDisplayModeStatus:;
- (void)setEnhancedWindowingEnabled:;
- (void)setTargetOfEventDeferringEnvironments:;
- (void)_setDebugValidationOrientationMaskEnabled:;
- (void)setInterfaceOrientationMapResolver:;
@end
