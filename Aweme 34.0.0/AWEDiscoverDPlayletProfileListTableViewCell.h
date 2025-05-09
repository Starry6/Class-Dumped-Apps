@interface AWEDiscoverDPlayletProfileListTableViewCell : UITableViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel updateMixLabel;
@property (nonatomic) UIView updateMixView;
@property (nonatomic) AWEPaymentBadgeView paymentBadgeView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configWithModel:;
- (double)adaptiveFontSize:;
- (id)paymentBadgeView;
- (void)setPaymentBadgeView:;
- (id)updateMixView;
- (id)updateMixLabel;
- (void)setUpdateMixLabel:;
- (void)setUpdateMixView:;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
+ (id)identifier;
+ (double)cellHeight;
@end
