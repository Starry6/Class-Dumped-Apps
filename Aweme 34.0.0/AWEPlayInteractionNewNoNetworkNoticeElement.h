@interface AWEPlayInteractionNewNoNetworkNoticeElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView noNetworkNoticeBarView;
- (void)initializeElement;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)viewDidDisposed;
- (void)handleNoNetworkDetectionResult:;
- (BOOL)shouldAppearWithData:;
- (void)noticeTapped;
- (void)updateNoticeBarViewRevealStatus:;
- (id)noNetworkNoticeBarView;
- (void)setNoNetworkNoticeBarView:;
- (void)updateViewHeight:;
- (void)updateNoNetworkNoticeBarView;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
@end
