@interface AWETeenAuthorBlockFooterView : UICollectionReusableView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView blockImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
- (void)p_setupUI;
- (id)blockImageView;
- (void)showContent:;
- (void)setBlockImageView:;
- (id)initWithFrame:;
- (id)contentView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
