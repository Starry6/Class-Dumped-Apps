@interface UgenSwiperViewCell : UgenRecylerLayoutCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView coverView;
- (void)setupCellFrame:;
- (void)setUgenContentView:;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)coverView;
- (void)setCoverView:;
@end
