@interface IESLivePKComponentVoteThemeBar : IESLiveRevenueInteractPlayComponent
@property (nonatomic) IESLivePKVoteScoreBar scoreBar;
@property (nonatomic) UILabel themeLabel;
- (void)componentContainerFrameChanged;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)loadThemeBar;
- (void)resetComponent;
- (id)scoreBar;
- (void)setScoreBar:;
- (void)setThemeLabel:;
- (id)themeLabel;
- (void).cxx_destruct;
@end
