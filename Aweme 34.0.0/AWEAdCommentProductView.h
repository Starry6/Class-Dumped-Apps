@interface AWEAdCommentProductView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel positiveLabel;
- (void)configureWithAdInfo:;
- (void)setPositiveLabel:;
- (id)initWithFrame:;
- (id)contentView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (void)setupViews;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)positiveLabel;
@end
