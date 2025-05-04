@interface AWEIMFansGroupCardStyleCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView cardBaseView;
@property (nonatomic) UIImageView cardImageView;
@property (nonatomic) UIView cardCenterView;
@property (nonatomic) UILabel cardTitleLabel;
@property (nonatomic) UILabel cardDescLabel;
@property (nonatomic) UIView cardRightView;
- (void)__setupUI;
- (id)cardBaseView;
- (void)setCardBaseView:;
- (id)cardTitleLabel;
- (void)setCardTitleLabel:;
- (id)cardDescLabel;
- (void)setCardDescLabel:;
- (id)cardRightView;
- (id)cardCenterView;
- (void)setCardCenterView:;
- (void)setCardRightView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)cardImageView;
- (void)setCardImageView:;
+ (id)identifier;
@end
