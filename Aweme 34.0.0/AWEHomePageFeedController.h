@interface AWEHomePageFeedController : AWEBaseController
@property (nonatomic) AWEFeedPlayerProtector playerProtector;
- (id)playerProtector;
- (void)tryResetPreventPauseState;
- (void)setPlayerProtector:;
- (id)init;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
@end
