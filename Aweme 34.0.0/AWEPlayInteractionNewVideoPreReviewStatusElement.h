@interface AWEPlayInteractionNewVideoPreReviewStatusElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView antiAddictedNoticeBarView;
@property (nonatomic) NSString tips;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (id)antiAddictedNoticeBarView;
- (void)setAntiAddictedNoticeBarView:;
- (void)updateAntiAddictedNoticeBarView;
- (void)trackPlaypageItemAuditBarIsDisplay:;
- (void)viewDidLoad;
- (id)identifier;
- (id)tips;
- (void).cxx_destruct;
- (void)reset;
- (void)setTips:;
@end
