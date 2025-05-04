@interface AWELiveSDKServicesInjector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)provideIESLiveHTTPClient;
- (id)provideIESLiveWebViewService;
- (id)provideIESLiveTracker;
- (id)provideIESLiveMonitor;
- (id)provideIESLiveWebImageService;
- (id)provideIESLiveAppInfo;
- (id)provideIESLiveFontScaleConfig;
- (id)provideIESLiveDFAnimationService;
- (id)provideIESLiveGeckoService;
- (id)provideIESLiveEnterpriseVerifyConfig;
- (id)provideIESLivePopularGemService;
- (id)provideIESLivePrivacyApiService;
- (id)provideIESLiveViewZoomService;
@end
