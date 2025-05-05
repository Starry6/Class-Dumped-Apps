@interface IESECLiveCarouselAnimationConfig : NSObject
@property (nonatomic) double interval;
@property (nonatomic) double appearInterval;
@property (nonatomic) double disappearInterval;
@property (nonatomic) double secondItemAppearTimeOffset;
@property (nonatomic) BOOL repeats;
@property (nonatomic) @? appearAnimation;
@property (nonatomic) @? disappearAnimation;
- (id)appearAnimation;
- (double)appearInterval;
- (id)disappearAnimation;
- (double)disappearInterval;
- (double)secondItemAppearTimeOffset;
- (void)setAppearAnimation:;
- (void)setAppearInterval:;
- (void)setDisappearAnimation:;
- (void)setDisappearInterval:;
- (void)setSecondItemAppearTimeOffset:;
- (id)init;
- (void)setRepeats:;
- (BOOL)repeats;
- (void)setInterval:;
- (void).cxx_destruct;
- (double)interval;
@end
