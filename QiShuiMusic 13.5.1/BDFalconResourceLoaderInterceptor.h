@interface BDFalconResourceLoaderInterceptor : NSObject
@property (nonatomic) WKWebView webview;
@property (nonatomic) NSCache cache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)falconDataForURLRequest:;
- (id)falconMetaDataForURLRequest:;
- (unsigned long long)falconPriority;
- (BOOL)shouldInterceptForRequest:;
- (id)init;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
- (id)webview;
- (void)setWebview:;
+ (void)setupWithWebView:;
@end
