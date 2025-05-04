@interface AWEPlayInteractionNewFollowSuccessElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView antiAddictedNoticeBarView;
@property (nonatomic) AWEHistoryPublicDataController listDataController;
@property (nonatomic) q actionType;
- (void)didFinishUnFollowUser:status:error:;
- (void)initializeElement;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)viewDidDisposed;
- (id)listDataController;
- (BOOL)shouldAppearWithData:;
- (id)antiAddictedNoticeBarView;
- (void)hideMutexTempElement:;
- (void)setAntiAddictedNoticeBarView:;
- (void)setListDataController:;
- (void)noticeTapped;
- (void)p_showAntiAddictedNoticeBarViewWithCompletion:;
- (void)p_hideAntiAddictedNoticeBarView:animation:;
- (void)showFollowSuccessNoticeBar:;
- (long long)actionType;
- (void)setActionType:;
- (void)dealloc;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
- (void)reset;
@end
