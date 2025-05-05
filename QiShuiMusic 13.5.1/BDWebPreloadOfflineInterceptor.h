@interface BDWebPreloadOfflineInterceptor : NSObject
@property (nonatomic) WKWebView webview;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)falconMetaDataForURLRequest:;
- (unsigned long long)falconPriority;
- (BOOL)shouldInterceptForRequest:;
- (void).cxx_destruct;
- (id)webview;
- (void)setWebview:;
+ (id)webContainerId:;
+ (void)setupWithWebView:;
@end
