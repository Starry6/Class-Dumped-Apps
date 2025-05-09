@interface IESLiveHybridGiftBannerView : UIView
@property (nonatomic) UIView<IESHYHybridViewProtocol> hybridView;
@property (nonatomic) UIView<IESHYHybridViewProtocol> lynxView;
@property (nonatomic) UIView<IESLiveWebViewProtocol> webView;
@property (nonatomic) BOOL enablePackupBanner;
@property (nonatomic) BOOL didLoad;
@property (nonatomic) <IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) <IESLiveWebViewService> webViewService;
@property (nonatomic) UIView<IESHYContainerProtocol> hybridContainer;
@property (nonatomic) UIView<IESHYContainerProtocol> hybridContainerV2;
@property (nonatomic) NSInteger bannerContainerSwitch;
@property (nonatomic) IESLiveGiftBannerViewModel banner;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoadFailedWithUrl:error:;
- (id)hybridContainer;
- (id)appendQueryURLWithBaseUrl:;
- (int)bannerContainerSwitch;
- (void)didFinishLoad;
- (BOOL)enablePackupBanner;
- (id)getComponentsWithURLString:;
- (void)handleFallbackURLNotFound;
- (id)hybridContainerV2;
- (id)hybridView;
- (void)iesLiveHybridContainer:loadFailWithError:;
- (BOOL)iesLiveHybridContainer:shouldAllowLoadWithResponse:;
- (void)iesLiveHybridContainerDidFinishLoad:;
- (void)loadHybridContainer:;
- (void)loadHybridViewFromFallBack:;
- (id)loadLynxView;
- (id)lynxView;
- (void)removeCurrentHybridView;
- (id)requestPage;
- (void)setBannerContainerSwitch:;
- (void)setEnablePackupBanner:;
- (void)setHybridContainer:;
- (void)setHybridContainerV2:;
- (void)setHybridView:;
- (void)setLynxView:;
- (void)setWebViewService:;
- (void)setWebviewFactory:;
- (id)targetURLStringForKernal:;
- (void)updateBannerLynxViewForGiftID:extraData:;
- (void)viewDidFinishLoadWithURL:;
- (BOOL)viewShouldAllowLoadWithResponse:;
- (id)webViewService;
- (id)webviewFactory;
- (id)banner;
- (void)setWebView:;
- (void)updateLayout;
- (void)dealloc;
- (id)webView;
- (void)setMonitor:;
- (void)setBanner:;
- (void).cxx_destruct;
- (id)monitor;
- (void)loadData;
- (BOOL)didLoad;
- (void)setDidLoad:;
- (id)initWithFrame:banner:;
- (id)loadWebView;
@end
