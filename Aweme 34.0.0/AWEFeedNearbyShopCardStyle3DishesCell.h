@interface AWEFeedNearbyShopCardStyle3DishesCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView imageBackgroundView;
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) UILabel layerLabel;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) BOOL isStructModel;
- (id)imageBackgroundView;
- (void)setImageBackgroundView:;
- (void)setIsStructModel:;
- (BOOL)isStructModel;
- (void)updateWithCardModel:isStructModel:;
- (id)layerLabel;
- (void)setLayerLabel:;
- (id)gradientView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)setImageView:;
- (id)imageView;
- (void)setNameLabel:;
- (void)setupUI;
- (void)layoutUI;
@end
