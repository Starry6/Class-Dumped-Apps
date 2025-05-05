@interface WBSSVGImageRenderingProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <WBSSiteMetadataProviderDelegate> providerDelegate;
@property (nonatomic) BOOL providesFavicons;
- (BOOL)canHandleRequest:;
- (void).cxx_destruct;
- (id)responseForRequest:willProvideUpdates:;
- (void)prepareResponseForRequest:allowDelayedResponse:;
- (id)providerDelegate;
- (void)setProviderDelegate:;
- (void)webViewMetadataFetchOperation:getWebViewOfSize:withConfiguration:completionHandler:;
- (void)webViewMetadataFetchOperation:didFinishUsingWebView:;
- (BOOL)_requestIsValid:;
@end
