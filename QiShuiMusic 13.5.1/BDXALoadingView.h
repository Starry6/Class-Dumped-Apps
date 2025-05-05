@interface BDXALoadingView : UIView
@property (nonatomic) BOOL animating;
@property (nonatomic) UIImageView imageView;
- (void)buildImageView;
- (void)setAnimating:;
- (id)intrinsicContentSize;
- (id)initWithCoder:;
- (void)startAnimating;
- (id)initWithFrame:;
- (void)stopAnimating;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setTintColor:;
- (void)willMoveToWindow:;
- (id)imageView;
- (void)setImageView:;
- (BOOL)animating;
@end
