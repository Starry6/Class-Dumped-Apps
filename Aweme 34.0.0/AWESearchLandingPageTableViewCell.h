@interface AWESearchLandingPageTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UILabel detailLabel;
- (void)configWithModel:;
- (void)configUI;
- (void)setDescriptionLabel:;
- (id)iconView;
- (void)setIconView:;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)setSelected:animated:;
- (void)setNameLabel:;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
