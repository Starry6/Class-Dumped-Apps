@interface AWEFeedNearbyShopCardContentPoiView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel dishesTypeLabel;
@property (nonatomic) UILabel averagePriceLabel;
- (id)dishesTypeLabel;
- (id)averagePriceLabel;
- (void)updateWithPOIInfoModelModel:;
- (void)setDishesTypeLabel:;
- (void)setAveragePriceLabel:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setNameLabel:;
- (void)setupUI;
- (void)layoutUI;
@end
