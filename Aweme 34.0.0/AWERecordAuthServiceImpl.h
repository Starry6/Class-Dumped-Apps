@interface AWERecordAuthServiceImpl : NSObject
@property (nonatomic) <IESServiceProvider> dependencyProvider;
@property (nonatomic) BOOL disableLandingToOtherMode;
@property (nonatomic) q rejectAuthCount;
@property (nonatomic) NSNumber landingMode;
@property (nonatomic) BOOL needRemindToAuthAlbum;
@property (nonatomic) q authStatusVersion;
@property (nonatomic) @ waitRedPackTheme;
@property (nonatomic) @? authCompletion;
@property (nonatomic) BOOL creatingCamera;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)innerClose;
- (void)setLandingMode:;
- (id)landingMode;
- (void)trackPermissionLayerState:;
- (BOOL)passAuthWithCheckRequired:;
- (void)showAuthViewIfNeededWithAuthStatus:authFinishBlock:;
- (void)switchModeServiceWillCheckAuthorityWithMode:oldMode:;
- (void)switchModeServiceCheckAuthorityWithMode:oldMode:completion:;
- (BOOL)passedMicAuth;
- (void)updateAuthStatusOfOldAuthService;
- (BOOL)creatingCamera;
- (void)switchStreamConfigIfNeed;
- (void)_checkAuthorityWithAuthStatus:completion:;
- (void)setDisableLandingToOtherMode:;
- (void)_buildCameraWithAuthStatus:completion:;
- (void)_sendPassAuthIfNeededWithWithAuthStatus:;
- (BOOL)disableLandingToOtherMode;
- (void)_landingToModeIfNeededWithAuthStatus:;
- (void)setRejectAuthCount:;
- (long long)rejectAuthCount;
- (void)_switchToPhotoCameraMode;
- (void)_defaultLandingWithNoCameraAndNoAlbum;
- (void)_switchToTextMode;
- (void)setupAuthorityView;
- (BOOL)mustHaveMicAuthScene;
- (BOOL)needRemindToAuthAlbum;
- (void)remindToAuthAlbum:;
- (void)changeAuthForRedPackTheme:oldAuthService:;
- (long long)authStatusVersion;
- (void)setAuthStatusVersion:;
- (id)dependencyProvider;
- (void)setNeedRemindToAuthAlbum:;
- (BOOL)isRedPackThemeRecording;
- (void)setCreatingCamera:;
- (void)setDependencyProvider:;
- (id)waitRedPackTheme;
- (void)setWaitRedPackTheme:;
- (void).cxx_destruct;
- (id)initWithServiceProvider:;
- (id)authCompletion;
- (void)setAuthCompletion:;
+ (BOOL)noPassCameraAuthWithCheckRequired:;
+ (BOOL)mustHaveAuthScene:serviceProvider:;
+ (BOOL)noPassMicAuthWithCheckRequired:ignoreAuthNeed:creationModel:serviceProvider:;
+ (BOOL)passAuthWithCheckRequired:creationModel:serviceProvider:;
@end
