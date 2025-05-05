@interface PIAWebViewContainerCore : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)engine:onLoadFinish:;
- (void)engine:onLoadStart:;
- (void)engine:onURLChange:;
- (void)injectPIAEngineAndFetchManifest:URL:;
- (void)onEngineDestroy:;
- (void)reportPVEvent:webView:;
- (void)updateUserAgent:URL:;
+ (void)executeAfterPrepareTask;
+ (id)getReceiverInstance;
@end
