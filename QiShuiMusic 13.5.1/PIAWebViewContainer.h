@interface PIAWebViewContainer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)engine:onLoadFinish:;
- (void)engine:onLoadStart:;
- (void)engine:onURLChange:;
- (void)fetchManifestFromContext:;
- (void)injectPIAContextAndFetchManifest:;
- (void)onEngineDestroy:;
- (void)onNavigationCommit:;
- (void)onOpenScheme:;
- (id)p_getPageConfigFromURL:;
- (void)p_onFetchManifest:context:manifestString:;
- (void)p_tryCacheManifestIfNeed:context:;
- (void)p_updateManifest:context:;
- (void)p_validateAsyncWithContext:version:completion:;
- (void)releaseContextWithInstance:;
- (void)releasePIAPortWithInstance:;
- (void)updateUserAgent:URL:;
- (id)_init;
+ (void)executeAfterPrepareTask;
+ (id)getReceiverInstance;
@end
