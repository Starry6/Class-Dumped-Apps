@interface AWEDemaciaButton : UIButton
@property (nonatomic) double selectedAlpha;
@property (nonatomic) UIImageView imageContentView;
- (void)setSelectedAlpha:;
- (double)selectedAlpha;
- (void)setHighlighted:;
- (void).cxx_destruct;
- (id)imageContentView;
- (void)setImageContentView:;
+ (id)buttonWithSelectedAlpha:;
+ (id)imageButtonWithSelectedAlpha:;
@end
