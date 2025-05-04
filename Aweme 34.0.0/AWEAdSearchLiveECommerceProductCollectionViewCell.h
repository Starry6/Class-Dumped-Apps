@interface AWEAdSearchLiveECommerceProductCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEAdSearchLiveECommerceProductCardModel adProductInfo;
@property (nonatomic) UIImageView productImageView;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)setAdProductInfo:;
- (void)configAdProductCellWithModel:;
- (id)adProductInfo;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setupSubviews;
- (id)priceLabel;
- (void)setPriceLabel:;
- (id)productImageView;
- (void)setProductImageView:;
@end
