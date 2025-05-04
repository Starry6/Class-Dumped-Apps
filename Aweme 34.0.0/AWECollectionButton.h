@interface AWECollectionButton : UIButton
@property (nonatomic) @? animateFinishblock;
@property (nonatomic) @? firstTouchAnimationFinishBlock;
@property (nonatomic) BOOL scaleWhenHighlighted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginFirstTouchAnimation;
- (BOOL)scaleWhenHighlighted;
- (id)firstTouchAnimationFinishBlock;
- (void)beginSecondTouchAnimation;
- (id)animateFinishblock;
- (void)beginTouchAnimation;
- (void)setAnimateFinishblock:;
- (void)setFirstTouchAnimationFinishBlock:;
- (void)setScaleWhenHighlighted:;
- (void)setAlpha:;
- (void)animationDidStop:finished:;
- (void)setHighlighted:;
- (void).cxx_destruct;
@end
