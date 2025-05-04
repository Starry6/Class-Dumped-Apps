@interface AWEIMPrivateChatManagementToolCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView cardImageView;
@property (nonatomic) UILabel cardTitleLabel;
@property (nonatomic) UIImageView rightArrowImageView;
- (void)__setupUI;
- (id)rightArrowImageView;
- (void)setRightArrowImageView:;
- (void)configWithIconURLLight:iconURLDark:title:;
- (id)cardTitleLabel;
- (void)setCardTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)cardImageView;
- (void)setCardImageView:;
+ (id)identifier;
@end
