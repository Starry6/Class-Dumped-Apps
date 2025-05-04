@interface AWERelatedVideoPlayingAnimationView : UIView
@property (nonatomic) UIView firstLine;
@property (nonatomic) UIView secondLine;
@property (nonatomic) UIView thirdLine;
- (void)animationRun;
- (void)updateLineColor:;
- (void)updateLineWidth;
- (void)__addAnimationWithDuration:timeoffset:view:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)firstLine;
- (id)secondLine;
- (void)setFirstLine:;
- (void)setSecondLine:;
- (void)setThirdLine:;
- (id)thirdLine;
@end
