@interface AWEPublishToControllCell : UITableViewCell
@property (nonatomic) UIImageView selectedIndicatorView;
@property (nonatomic) UIView sepView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) BOOL clickable;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) UIColor descriptionColor;
- (void)setClickable:;
- (id)sepView;
- (void)setSepView:;
- (id)selectedIndicatorView;
- (void)setSelectedIndicatorView:;
- (void)addSubviewsForContentView;
- (id)descriptionColor;
- (void)configWithTitle:description:;
- (void)hideSeparateLine;
- (void)setDescriptionColor:;
- (id)titleColor;
- (void)setDescriptionLabel:;
- (void)setTitleColor:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)setSelected:animated:;
- (BOOL)clickable;
@end
