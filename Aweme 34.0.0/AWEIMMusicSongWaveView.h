@interface AWEIMMusicSongWaveView : UIView
@property (nonatomic) NSMutableArray animationlayers;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) UIColor waveColor;
- (void)setWaveColor:;
- (void)p_refreshWaveColorIfNeeded;
- (id)animationlayers;
- (void)setAnimationlayers:;
- (double)p_getBarInitialHeightWithIndex:;
- (id)waveColor;
- (double)p_getBarHeightAnimationToValueWithIndex:;
- (BOOL)isPlaying;
- (void)play;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;
- (void)setIsPlaying:;
- (void)pause;
- (void)setupView;
@end
