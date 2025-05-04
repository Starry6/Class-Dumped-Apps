@interface AWESearchFilterListItemCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView markImageView;
- (id)markImageView;
- (void)setMarkImageView:;
- (void)setHighlighted:animated:;
- (void)setHighlighted:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelected:;
- (void)setSelected:animated:;
- (void)setupUI;
+ (id)identifier;
@end
