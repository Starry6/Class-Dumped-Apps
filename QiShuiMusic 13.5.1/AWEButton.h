@interface AWEButton : UIButton
@property (nonatomic) double selectedAlpha;
@property (nonatomic) UIImageView imageContentView;
- (double)selectedAlpha;
- (void)setSelectedAlpha:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)imageContentView;
- (void)setImageContentView:;
+ (id)buttonWithSelectedAlpha:;
+ (id)imageButtonWithSelectedAlpha:;
@end
