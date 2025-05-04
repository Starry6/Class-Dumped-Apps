@interface AWEPlayInteractionAdNewFollowSuccessElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView antiAddictedNoticeBarView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)initializeElement;
- (id)activateInfoWithData:;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (id)antiAddictedNoticeBarView;
- (void)hideMutexTempElement:;
- (void)setAntiAddictedNoticeBarView:;
- (void)noticeTapped;
- (void)showAntiAddictedNoticeBarView;
- (void)hideAntiAddictedNoticeBarView;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
