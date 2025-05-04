@interface AWEFloatOnTopBasicContainer : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) {CGPoint=dd} movementStartPoint;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} movementStartFrame;
- (void)setMovementStartPoint:;
- (void)setMovementStartFrame:;
- (id)movementStartPoint;
- (id)movementStartFrame;
- (void)animateToAdjustedFrame;
- (id)initWithFrame:;
- (id)contentView;
- (void)dismiss;
- (void)pan:;
- (void).cxx_destruct;
- (void)setContentView:;
+ (id)adjustedFrameWithFrame:;
@end
