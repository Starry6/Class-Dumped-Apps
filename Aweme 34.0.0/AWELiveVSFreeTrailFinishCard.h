@interface AWELiveVSFreeTrailFinishCard : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel identityNameLabel;
@property (nonatomic) AWELiveVSFreeTrailFinishCardPurchaseButton purchaseButton;
- (void)reloadWithData:;
- (void)setIdentityNameLabel:;
- (id)identityNameLabel;
- (void)setupTags:;
- (id)init;
- (void)setup;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (id)purchaseButton;
- (void)setPurchaseButton:;
@end
