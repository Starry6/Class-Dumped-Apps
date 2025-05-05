@interface BDCTWebView : WKWebView
@property (nonatomic) BDCTCorePiperHandler corePiperHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addPiperHandler:;
- (void)addPiperHandlers;
- (id)corePiperHandler;
- (void)p_loadURL:;
- (void)setCorePiperHandler:;
- (id)initWithFrame:configuration:;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)webView:didFinishNavigation:;
- (BOOL)isOpaque;
- (void)loadURL:;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:;
+ (id)webView;
@end
