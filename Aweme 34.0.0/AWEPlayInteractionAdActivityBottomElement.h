@interface AWEPlayInteractionAdActivityBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) UIView<AWEFeedCommerceBottomTipProtocol> adActivityView;
- (void)initializeElement;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (void)hideMutexTempElement:;
- (void)updateAdActivityView;
- (id)adActivityView;
- (void)p_showAntiAddictedNoticeBarViewWithCompletion:;
- (void)trackOnDisplay;
- (void)setAdActivityView:;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
- (void)reset;
@end
