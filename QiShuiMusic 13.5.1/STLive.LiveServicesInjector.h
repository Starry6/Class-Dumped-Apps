@interface STLive.LiveServicesInjector : NSObject
- (id)provideIESLiveSaaSLoggerService;
- (id)provideIESLiveHTTPClient;
- (id)provideIESLiveSaaSADTracker;
- (id)provideIESLiveSaaSAlertFactory;
- (id)provideIESLiveSaaSAppInfoService;
- (id)provideIESLiveSaaSToastFactory;
- (id)provideIESLiveSaaSTracker;
- (id)provideIESLiveSaaSWebImageService;
- (id)provideIESLiveSaaSWebViewService;
- (id)init;
@end
