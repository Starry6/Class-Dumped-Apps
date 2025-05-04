@interface AWEMusicPlayerProgressViewStyleInfo : NSObject
@property (nonatomic) UIColor playLineColor;
@property (nonatomic) UIColor backLineColor;
@property (nonatomic) UIColor sliderColor;
@property (nonatomic) UIColor playingTimeColor;
@property (nonatomic) UIColor durationTimeColor;
- (id)sliderColor;
- (void)setSliderColor:;
- (id)playLineColor;
- (id)backLineColor;
- (id)playingTimeColor;
- (id)durationTimeColor;
- (void)setPlayLineColor:;
- (void)setPlayingTimeColor:;
- (void)setDurationTimeColor:;
- (void)setBackLineColor:;
- (void).cxx_destruct;
@end
