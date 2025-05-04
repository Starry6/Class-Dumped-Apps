@interface AWEUIFavoriteTableViewCell : UITableViewCell
@property (nonatomic) q cellType;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel infoLabel;
- (double)coverImageHeight;
- (void)configWithTitleText:secondLineText:thirdLineText:;
- (id)initWithCellType:cellStyle:reuseIdentifier:;
- (void)configWithTitleText:secondLineText:;
- (long long)cellType;
- (void)setCellType:;
- (void)setHighlighted:animated:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)infoLabel;
- (void)setIconImageView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setInfoLabel:;
+ (id)identifier;
+ (double)cellHeight;
@end
