@interface AWEDetailPageInfoBannerView : UIView
@property (nonatomic) UIImageView avatar;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UILabel usageLabel;
@property (nonatomic) UILabel usageCount;
- (void)setUsageLabel:;
- (id)init;
- (void)setDescriptionLabel:;
- (void)updateConstraints;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)layoutSubviews;
- (void)setupUI;
- (id)actionButton;
- (id)avatar;
- (void)setActionButton:;
- (void)setAvatar:;
- (void)setUsageCount:;
- (id)usageCount;
- (id)usageLabel;
@end
