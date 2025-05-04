@interface AWEFeedNearbyShopCardContentGroupBuyingView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel presentPriceLabel;
@property (nonatomic) UILabel originPriceLabel;
@property (nonatomic) UILabel discountLabel;
@property (nonatomic) UIView discountLabelView;
@property (nonatomic) UILabel moneyIconLabel;
- (void)setDiscountLabel:;
- (id)discountLabel;
- (void)setOriginPriceLabel:;
- (id)originPriceLabel;
- (id)presentPriceLabel;
- (id)discountLabelView;
- (id)moneyIconLabel;
- (void)updateWithSpuInfoModel:;
- (void)setPresentPriceLabel:;
- (void)setDiscountLabelView:;
- (void)setMoneyIconLabel:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setNameLabel:;
- (void)setupUI;
- (void)layoutUI;
@end
