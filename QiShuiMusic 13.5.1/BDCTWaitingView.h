@interface BDCTWaitingView : UIView
@property (nonatomic) UIImageView imageView;
- (void)buildImageView;
- (id)intrinsicContentSize;
- (id)initWithCoder:;
- (void)startAnimating;
- (id)initWithFrame:;
- (void)stopAnimating;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)imageView;
- (void)willMoveToSuperview:;
- (void)setImageView:;
@end
