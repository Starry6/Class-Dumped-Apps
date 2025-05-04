@interface AWEFeedNearbyShopCardDishesCell : UICollectionViewCell
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView imageBackgroundView;
- (id)imageBackgroundView;
- (void)setImageBackgroundView:;
- (void)updateWithCardModel:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setNameLabel:;
- (void)layoutUI;
@end
