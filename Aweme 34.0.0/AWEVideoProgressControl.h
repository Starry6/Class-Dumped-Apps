@interface AWEVideoProgressControl : AWEVideoPlayControl
@property (nonatomic) UIView shadowView;
@property (nonatomic) UIView whiteStripeView;
- (void)setImageWithName:;
- (id)whiteStripeView;
- (double)progressControlHeight;
- (void)setWhiteStripeView:;
- (id)shadowView;
- (void)setImage:;
- (id)initWithFrame:;
- (void)refreshUI;
- (void)setShadowView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:;
@end
