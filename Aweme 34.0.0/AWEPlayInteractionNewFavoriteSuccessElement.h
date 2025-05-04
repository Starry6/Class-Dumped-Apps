@interface AWEPlayInteractionNewFavoriteSuccessElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView antiAddictedNoticeBarView;
- (void)initializeElement;
- (id)activateInfoWithData:;
- (BOOL)shouldAppearWithData:;
- (id)antiAddictedNoticeBarView;
- (void)hideNoticeBarImmediately;
- (void)hideMutexTempElement:;
- (void)setAntiAddictedNoticeBarView:;
- (void)noticeTapped;
- (void)p_showAntiAddictedNoticeBarViewWithCompletion:;
- (void)setShouldShowFavoriteSuccessNoticeBar:;
- (void)showSuccessFavoriteNoticeBar;
- (void)setTipsAndShow:;
- (void)p_hideAntiAddictedNoticeBarView:animation:;
- (void)trackFavoriteEvent:Enterfrom:enterMethod:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
