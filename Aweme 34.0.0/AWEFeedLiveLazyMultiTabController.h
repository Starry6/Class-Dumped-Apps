@interface AWEFeedLiveLazyMultiTabController : UIViewController
@property (nonatomic) NSDictionary landingParams;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> channelConfig;
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> contentVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transition_didStartTransitionWithContext:;
- (id)currentAweme;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (unsigned long long)transition_destinatedType;
- (void)setLandingParams:;
- (void)setChannelConfig:;
- (void)setupSubView;
- (id)channelConfig;
- (id)contentVC;
- (void)setContentVC:;
- (id)getHandleLeftSlideToUserTableVC;
- (id)landingParams;
- (void)configWithLandingParams:;
- (BOOL)isKindOfClass:;
- (id)forwardingTargetForSelector:;
- (void)viewDidLoad;
- (BOOL)respondsToSelector:;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
@end
