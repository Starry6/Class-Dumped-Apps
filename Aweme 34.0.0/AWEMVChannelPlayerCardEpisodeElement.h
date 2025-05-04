@interface AWEMVChannelPlayerCardEpisodeElement : AWEMVChannelPlayerCardBaseElement
@property (nonatomic) UILabel episodeLabel;
@property (nonatomic) AWERelatedVideoPlayingAnimationView playingAnimationView;
- (id)episodeLabel;
- (void)setEpisodeLabel:;
- (id)playingAnimationView;
- (void)setPlayingAnimationView:;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
