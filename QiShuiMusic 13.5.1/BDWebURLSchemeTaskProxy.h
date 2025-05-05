@interface BDWebURLSchemeTaskProxy : NSObject
@property (nonatomic) BOOL stopped;
@property (nonatomic) <WKURLSchemeTask> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSchemeTask:didFailWithError:;
- (void)URLSchemeTask:didLoadData:;
- (void)URLSchemeTask:didPerformRedirection:newRequest:;
- (void)URLSchemeTask:didReceiveResponse:;
- (void)URLSchemeTaskDidFinishLoading:;
- (void)webView:willRecordMainFrameModel:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (void)setStopped:;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (BOOL)stopped;
+ (SEL)schemeTaskRedirectionSelector;
@end
