@interface UISMutableApplicationInitializationContext : UISApplicationInitializationContext
@property (nonatomic) UISDisplayContext displayContext;
@property (nonatomic) UISDisplayContext mainDisplayContext;
@property (nonatomic) UISDisplayContext launchDisplayContext;
@property (nonatomic) UISDeviceContext deviceContext;
@property (nonatomic) UISCompatibilityContext compatibilityContext;
@property (nonatomic) NSSet persistedSceneIdentifiers;
@property (nonatomic) FBSSceneIdentityToken defaultSceneToken;
@property (nonatomic) BOOL supportAppSceneRequests;
- (void)setDeviceContext:;
- (id)copyWithZone:;
- (void)setDisplayContext:;
- (void)setMainDisplayContext:;
- (void)setLaunchDisplayContext:;
- (void)setCompatibilityContext:;
- (void)setPersistedSceneIdentifiers:;
- (void)setDefaultSceneToken:;
- (void)setSupportAppSceneRequests:;
@end
