@interface LAUIPhysicalButtonView : UIView
@property (nonatomic) q style;
@property (nonatomic) q animationStyle;
@property (nonatomic) BOOL animating;
@property (nonatomic) I edge;
@property (nonatomic) NSString instruction;
- (void)setAnimating:;
- (id)init;
- (BOOL)isAnimating;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (id)_colorForStyle:;
- (void)setStyle:;
- (void)setAnimationStyle:;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (long long)animationStyle;
- (long long)style;
- (unsigned int)edge;
- (id)initWithStyle:;
- (id)instruction;
- (void)setInstruction:;
- (void)updateFrame;
- (id)_physicalButtonNormalizedFrame;
- (void)_setOnScreen:;
@end
