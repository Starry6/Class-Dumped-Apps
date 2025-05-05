@interface UITextMagnifierRanged : UITextMagnifier
@property (nonatomic) BOOL isHorizontal;
- (id)clipPoint:inRect:;
- (id)adjustMagnificationPoint:;
- (void)setMagnificationPoint:;
- (BOOL)terminalPointPlacedCarefully;
- (void)beginMagnifyingTarget:text:magnificationPoint:offset:animated:;
- (void)stopMagnifying:;
- (void)zoomUpAnimation;
- (void)zoomDownAnimation;
- (void)updateFrameAndOffset;
- (BOOL)isHorizontal;
- (double)offsetFromMagnificationPoint;
- (id)initWithFrame;
- (void)setIsHorizontal:;
- (int)horizontalMovementAtTime:;
- (BOOL)wasPlacedCarefullyAtTime:;
- (int)horizontalMovement;
- (id)caretRectClosestToPoint:;
+ (Class)renderClass;
+ (id)activeRangedMagnifier;
+ (id)sharedRangedMagnifier;
@end
