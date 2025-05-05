@interface BDCTWebViewController : BDCTDisablePanGestureViewController
@property (nonatomic) NSString url;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithUrl:title:;
- (id)url;
- (void)webView:didFinishNavigation:;
- (void)setTitleLabel:;
- (void)setUrl:;
- (id)webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (id)titleLabel;
- (void)viewDidLoad;
@end
