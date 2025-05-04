@interface AWEFavoriteBatManTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel introductionLabel;
- (id)introductionLabel;
- (void)setIntroductionLabel:;
- (void)setHighlighted:animated:;
- (id)iconView;
- (void)setIconView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)configureWithModel:;
+ (id)identifier;
+ (double)cellHeight;
@end
