@interface UgenSwiperViewLoadMoreCell : UgenRecylerLayoutCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel label;
- (void)p_layoutSubview;
- (void)p_setLoadMoreText:;
- (void)setLoadMoreProps:;
- (id)containerView;
- (void)setContainerView:;
- (void)setLabel:;
- (id)label;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
@end
