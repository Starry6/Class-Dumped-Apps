@interface GEOMapsAuthServiceHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)valueChangedForGEOConfigKey:;
- (id)init;
- (void)addMapsAuthDidFinishObserver:forRequestType:;
- (void)autoUpdateClientFeatureFlags;
- (void)requestFeatureFlagsWithURL:suppressNotification:;
- (void)renewMapsAuthProxyToken:fromToken:authProxyURL:suppressNotification:;
- (void)addMapsAuthDidFinishObserver:;
- (void)doEnvironmentSwitchCheck:authProxyURL:suppressNotification:;
- (id)dictionaryForAuthTokenState;
- (void)setConnectionProxyDictionary:url:proxyURL:;
- (BOOL)isCurrentEnvironmentSecure;
- (void)removeMapsAuthDidFinishObserver:;
- (void).cxx_destruct;
- (void)handleSecureProxyChallenge:;
- (void)checkNetworkError:sendingGeoDErrorIfApplicable:;
- (void)resourceManifestManagerDidChangeActiveTileGroup:;
- (void)addProxyAuthHeaderOrReAuth:authProxyURL:;
- (void)invalidateTokens;
- (void)removeMapsAuthDidFinishObserver:forRequestType:;
- (void)sendProxyAuthNotification:;
+ (id)sharedAuthHelper;
@end
