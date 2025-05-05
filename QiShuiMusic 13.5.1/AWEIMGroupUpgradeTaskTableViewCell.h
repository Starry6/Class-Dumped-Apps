@interface AWEIMGroupUpgradeTaskTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIImageView tickImageView;
@property (nonatomic) <AWEIMGroupUpgradeTaskTableViewCellDelegate> delegate;
- (void)configWithModel:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setTickImageView:;
- (id)tickImageView;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (id)identifier;
@end
