@interface UITextMagnifierCaret : UITextMagnifier
@property (nonatomic) {CGPoint=dd} offset;
- (void)setOffset:;
- (void)remove;
- (id)offset;
- (BOOL)terminalPointPlacedCarefully;
- (void)beginMagnifyingTarget:text:magnificationPoint:offset:animated:;
- (void)zoomUpAnimation;
- (void)zoomDownAnimation;
- (void)updateFrameAndOffset;
- (BOOL)isHorizontal;
- (double)offsetFromMagnificationPoint;
- (id)animationPoint;
- (void)setAnimationPoint:;
- (id)initWithFrame;
+ (id)activeCaretMagnifier;
+ (id)sharedCaretMagnifier;
+ (Class)renderClass;
@end
