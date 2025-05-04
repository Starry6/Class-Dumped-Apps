@interface AWESECAppJumpContext : NSObject
@property (nonatomic) NSURL targetURL;
@property (nonatomic) NSURL sourceHybridURL;
@property (nonatomic) Q checkStartTime;
@property (nonatomic) NSString sqrID;
@property (nonatomic) WKWebView webView;
- (void)setCheckStartTime:;
- (void)setSourceHybridURL:;
- (void)setSqrID:;
- (id)sourceHybridURL;
- (unsigned long long)checkStartTime;
- (id)sqrID;
- (void)setWebView:;
- (id)webView;
- (void).cxx_destruct;
- (id)targetURL;
- (void)setTargetURL:;
@end
