@interface AWEFeedNearbyShopCardStyle2ContentPoiView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel dishesNamesLabel;
@property (nonatomic) UIImageView top1ImageView;
@property (nonatomic) UIImageView top2ImageView;
@property (nonatomic) UIImageView iconView;
- (void)updateWithPOIInfoModelModel:;
- (id)dishesNamesLabel;
- (id)top1ImageView;
- (id)top2ImageView;
- (void)setDishesNamesLabel:;
- (void)setTop1ImageView:;
- (void)setTop2ImageView:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)layoutUI;
@end
