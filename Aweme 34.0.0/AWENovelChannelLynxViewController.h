@interface AWENovelChannelLynxViewController : AWENovelLynxViewController
@property (nonatomic) NSString referString;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canRefresh;
- (id)referString;
- (void)pauseWithAnimation;
- (void)setReferString:;
- (BOOL)currentTabIsTop;
- (void)animatedRefreshWithCompletion:;
- (void)channelLandingTabWithParams:;
- (id)frameForWebView;
- (id)initWithRouteParams:sourceURlString:;
- (void)setScrollEnabled:;
- (void)play;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)reload;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
@end
