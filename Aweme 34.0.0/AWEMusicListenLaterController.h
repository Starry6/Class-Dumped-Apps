@interface AWEMusicListenLaterController : AWEBaseController
@property (nonatomic) q stateBefore;
- (long long)stateBefore;
- (void)setStateBefore:;
- (void)onSubPlayerWillShow;
- (void)onSubPlayerDismiss;
- (void)viewDidLoad;
@end
