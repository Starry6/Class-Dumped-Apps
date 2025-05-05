@interface IESECHighlightButton : UIButton
@property (nonatomic) double selectedAlpha;
@property (nonatomic) UIImageView imageContentView;
@property (nonatomic) {UIEdgeInsets=dddd} hitTestEdgeInsets;
@property (nonatomic) UILabel subTextLabel;
- (double)selectedAlpha;
- (void)setSelectedAlpha:;
- (void)setSubTextLabel:;
- (void)setHitTestEdgeInsets:;
- (BOOL)pointInside:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)hitTestEdgeInsets;
- (id)imageContentView;
- (void)setImageContentView:;
- (id)subTextLabel;
+ (id)buttonWithSelectedAlpha:;
+ (id)imageButtonWithSelectedAlpha:;
@end
