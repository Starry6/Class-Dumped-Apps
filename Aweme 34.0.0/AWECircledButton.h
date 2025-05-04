@interface AWECircledButton : UIButton
@property (nonatomic) NSArray scales;
@property (nonatomic) NSArray circleLayers;
@property (nonatomic) BOOL isHideHighlightImage;
- (void)setCircleLayers:;
- (id)initWithCircleImages:animationScales:;
- (id)circleLayers;
- (BOOL)isHideHighlightImage;
- (id)initWithCircleImages:;
- (void)setIsHideHighlightImage:;
- (id)scales;
- (void)setHighlighted:;
- (void)setScales:;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)didMoveToWindow;
@end
