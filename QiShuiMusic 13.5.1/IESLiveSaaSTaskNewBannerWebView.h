@interface IESLiveSaaSTaskNewBannerWebView : UIView
@property (nonatomic) IESLiveSaaSTaskBannerStore store;
@property (nonatomic) BOOL didLoad;
@property (nonatomic) IESLiveSaaSBannerListModel banner;
@property (nonatomic) {CGSize=dd} containerSize;
@property (nonatomic) PuzzleHybridContainer hybridContainer;
@property (nonatomic) <IESLiveSaaSTaskBannerViewNewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoadFailedWithUrl:error:;
- (id)hybridContainer;
- (void)addAdditionJSB;
- (void)didFinishLoad;
- (void)loadHybridContainerWithURL:;
- (id)pluginLayoutContentInsets;
- (id)pluginLayoutContentSize;
- (void)refreshPKStatus:;
- (void)renderBanners:;
- (void)resizeContainerWidth:;
- (void)setHybridContainer:;
- (void)switchWebViewBlankDetect:webView:;
- (void)viewDidFinishLoadWithURL:;
- (BOOL)viewShouldAllowLoadWithResponse:;
- (id)banner;
- (id)viewType;
- (void)dealloc;
- (void)setStore:;
- (id)initWithStore:;
- (id)intrinsicContentSize;
- (void)handleMessage:;
- (void)setContainerSize:;
- (void)setDelegate:;
- (id)hitTest:withEvent:;
- (id)delegate;
- (void)setBanner:;
- (void).cxx_destruct;
- (id)containerSize;
- (id)store;
- (BOOL)didLoad;
- (void)setDidLoad:;
@end
