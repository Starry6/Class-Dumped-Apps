@interface AWEButton : UIButton
@property (nonatomic) double selectedAlpha;
@property (nonatomic) UIImageView imageContentView;
@property (nonatomic) BOOL enableLeftHandOptimize;
@property (nonatomic) @? pointInsideBlock;
- (BOOL)enableLeftHandOptimize;
- (void)setEnableLeftHandOptimize:;
- (void)setSelectedAlpha:;
- (double)selectedAlpha;
- (id)pointInsideBlock;
- (void)setPointInsideBlock:;
- (BOOL)pointInside:withEvent:;
- (void)setHighlighted:;
- (void).cxx_destruct;
- (id)imageContentView;
- (void)setImageContentView:;
+ (id)buttonWithSelectedAlpha:;
+ (id)imageButtonWithSelectedAlpha:;
@end
