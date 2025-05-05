@interface BDWKWebViewKeeper : NSObject
@property (nonatomic) NSMutableArray webViewList;
@property (nonatomic) float keepTs;
@property (nonatomic) NSTimer timer;
- (void)setWebViewList:;
- (void)checkWebList;
- (float)keepTs;
- (void)keepWebView:;
- (void)setKeepTs:;
- (id)webViewList;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
+ (id)shareInstance;
@end
