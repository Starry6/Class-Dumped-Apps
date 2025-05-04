@interface AWEPlayInteractionBookVideoDetailBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView bookVideoDetailBottomView;
- (id)trackParams;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (void)trackStayDurationEvent;
- (void)trackBarShow;
- (void)trackBarClick;
- (id)bookVideoDetailBottomView;
- (void)setBookVideoDetailBottomView:;
- (BOOL)shouldShowBookVideoDetailBottomView:;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
- (void)tapped;
@end
