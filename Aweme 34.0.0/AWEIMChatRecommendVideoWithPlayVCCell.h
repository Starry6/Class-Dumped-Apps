@interface AWEIMChatRecommendVideoWithPlayVCCell : AWEIMChatRecommendVideoCollectionViewCell
@property (nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> playViewController;
- (void)setAwemeModel:;
- (id)uiConfig;
- (double)currentPlayBackTime;
- (void)p_setupLayout;
- (id)awemePlayViewController;
- (void)reconfigurePlayViewControllerIfNeeded;
- (void)p_setupPlayVideoViewController;
- (id)playViewController;
- (void)setPlayViewController:;
- (void)didBecomeActive;
- (void)dealloc;
- (void)prepareForReuse;
- (void)didResignActive;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)pauseVideo;
- (void)playVideo;
@end
