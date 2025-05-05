@interface IESECBalanceExchangeCouponView : UIView
@property (nonatomic) UIView seperatorLine;
@property (nonatomic) UIImageView redeemEntry;
@property (nonatomic) UIImageView couponExchangeIcon;
@property (nonatomic) UILabel subDescribeLabel;
@property (nonatomic) UILabel mainDescribeLabel;
@property (nonatomic) UILabel redeemDescriptionLabel;
@property (nonatomic) IESECGradientView backgroundView;
- (void)setRedeemEntry:;
- (id)couponExchangeIcon;
- (id)mainDescribeLabel;
- (id)redeemDescriptionLabel;
- (id)redeemEntry;
- (void)setCouponExchangeIcon:;
- (void)setMainDescribeLabel:;
- (void)setRedeemDescriptionLabel:;
- (void)setSubDescribeLabel:;
- (id)subDescribeLabel;
- (void)updateUIWithModel:;
- (id)backgroundView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (void)setupUI;
- (id)seperatorLine;
- (void)setSeperatorLine:;
@end
