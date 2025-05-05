@interface AWEAnimatedButton : UIButton
@property (nonatomic) Q type;
@property (nonatomic) AVAudioPlayer player;
@property (nonatomic) double animationDuration;
@property (nonatomic) double highlightedScale;
@property (nonatomic) NSURL audioURL;
- (double)highlightedScale;
- (void)setHighlightedScale:;
- (double)animationDuration;
- (void)setType:;
- (id)initWithFrame:;
- (id)player;
- (unsigned long long)type;
- (void)setAnimationDuration:;
- (void).cxx_destruct;
- (void)setPlayer:;
- (void)setHighlighted:;
- (id)initWithType:;
- (id)audioURL;
- (void)setAudioURL:;
- (id)initWithFrame:type:;
@end
