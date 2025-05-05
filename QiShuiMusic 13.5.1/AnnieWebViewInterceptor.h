@interface AnnieWebViewInterceptor : NSObject
@property (nonatomic) BDXThreadSafeArray handlerArray;
- (id)handlerArray;
- (void)registerInterceptor:;
- (void)setHandlerArray:;
- (void)unregiserInterceptor:;
- (id)webview:handleURLIfNeeded:;
- (id)init;
- (void).cxx_destruct;
+ (void)registerWebViewInterceptor:;
+ (void)unregiserWebViewInterceptor:;
+ (id)webview:handleURLIfNeeded:;
+ (id)sharedInstance;
@end
