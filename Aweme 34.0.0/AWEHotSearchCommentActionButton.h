@interface AWEHotSearchCommentActionButton : UIControl
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isAnimating;
- (void)configIsSelected:;
- (void)toggleSelected:needAnimate:;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (BOOL)isSelected;
- (BOOL)isAnimating;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
@end
