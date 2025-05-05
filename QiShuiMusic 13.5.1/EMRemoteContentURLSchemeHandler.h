@interface EMRemoteContentURLSchemeHandler : NSObject
@property (nonatomic) BOOL allowProxying;
@property (nonatomic) NSString schemePrefix;
@property (nonatomic) NSString remoteContentHTTPScheme;
@property (nonatomic) NSString remoteContentHTTPSScheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)webView:startURLSchemeTask:;
- (void)webView:stopURLSchemeTask:;
- (void).cxx_destruct;
- (void)setOnWebViewConfiguration:;
- (id)schemePrefix;
- (id)initWithSession:schemePrefix:allowProxying:;
- (id)remoteContentHTTPScheme;
- (id)remoteContentHTTPSScheme;
- (BOOL)allowProxying;
+ (id)dataTaskForRequest:withSchemePrefix:session:scheduler:allowProxying:cancelationToken:completionHandler:;
@end
