@interface IESForestNavigationDelegateProxy : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) WKWebView webView;
@property (nonatomic) @ navigationDelegateProxy;
@property (nonatomic) NSCache cache;
@property (nonatomic) NSString willLoadURLString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)navigationDelegateProxy;
- (void)setNavigationDelegateProxy:;
- (void)setWillLoadURLString:;
- (id)willLoadURLString;
- (void)setWebView:;
- (id)init;
- (id)webView;
- (void)setSemaphore:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setCache:;
- (void).cxx_destruct;
- (id)semaphore;
- (id)cache;
@end
