@interface AWEPlayInteractionAddWarningBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView antiAddictedNoticeBarView;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (void)trackShowEvent;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)trackClickEvent;
- (BOOL)isMyVideoWithAwemeModel:;
- (BOOL)shouldAppearWithData:;
- (id)antiAddictedNoticeBarView;
- (void)setAntiAddictedNoticeBarView:;
- (void)updateAntiAddictedNoticeBarView;
- (void)trackStayDurationEvent;
- (void)viewDidLoad;
- (id)identifier;
- (void)setData:;
- (void).cxx_destruct;
- (void)tapHandler;
@end
