@interface CJPayBaseHybridWebview : UIView
@property (nonatomic) UIView hybridView;
@property (nonatomic) NSString scheme;
@property (nonatomic) @ delegate;
@property (nonatomic) NSDictionary params;
@property (nonatomic) WKWebView webview;
@property (nonatomic) NSString containerID;
- (id)hybridView;
- (id)initWithScheme:delegate:initialData:;
- (void)sendEvent:params:;
- (void)setHybridView:;
- (void)setScheme:;
- (id)containerID;
- (id)scheme;
- (void)setContainerID:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (id)webview;
- (void)setWebview:;
- (void)p_init;
@end
