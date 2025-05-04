@interface AWEAnimatedButton : UIButton
@property (nonatomic) Q type;
@property (nonatomic) AVAudioPlayer player;
@property (nonatomic) double animationDuration;
@property (nonatomic) double highlightedScale;
@property (nonatomic) NSURL audioURL;
- (double)highlightedScale;
- (void)setHighlightedScale:;
- (id)initWithFrame:;
- (unsigned long long)type;
- (id)player;
- (void)setHighlighted:;
- (void)setPlayer:;
- (void)setType:;
- (void).cxx_destruct;
- (void)setAnimationDuration:;
- (id)initWithType:;
- (double)animationDuration;
- (id)audioURL;
- (void)setAudioURL:;
- (id)initWithFrame:type:;
@end
