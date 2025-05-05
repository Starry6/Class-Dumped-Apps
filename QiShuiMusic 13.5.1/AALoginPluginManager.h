@interface AALoginPluginManager : NSObject
@property (nonatomic) BOOL shouldSkipiTunesPlugin;
@property (nonatomic) BOOL shouldStashLoginResponse;
- (BOOL)shouldSkipiTunesPlugin;
- (id)init;
- (id)collectParametersForLoginRequest;
- (id)_idsPlugin;
- (void)restrictToPluginBundleIDs:;
- (id)_plugins;
- (void)notifyServicesOfLoginResponse:forAppleID:password:completion:;
- (void)notifyServicesOfLoginResponse:forAppleID:password:rawPassword:completion:;
- (void).cxx_destruct;
- (id)_loadPluginsLimitedToBundleIDs:;
- (id)collectParametersForIdentityEstablishmentRequest;
- (void)unstashLoginResponse;
- (void)setShouldSkipiTunesPlugin:;
- (void)setShouldStashLoginResponse:;
- (id)_createLoginContextForAppleID:rawPassword:loginResponse:;
- (BOOL)_notifyServicesOfLoginResponse:forAppleID:password:rawPassword:;
- (BOOL)shouldStashLoginResponse;
+ (id)sharedInstance;
@end
