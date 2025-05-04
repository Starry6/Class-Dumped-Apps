@interface AWESearchLiveSearchMultiGoodsListMediumViewCell : UICollectionViewCell
@property (nonatomic) UIImageView goodsImageView;
@property (nonatomic) CAGradientLayer goodsImageGradientLayer;
@property (nonatomic) UIImageView statusIconView;
@property (nonatomic) UILabel priceSymbolLabel;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) AWESearchEcommerceAnchorModel model;
- (id)goodsImageView;
- (void)setGoodsImageView:;
- (void)setPriceSymbolLabel:;
- (id)priceSymbolLabel;
- (id)statusIconView;
- (void)setStatusIconView:;
- (id)goodsImageGradientLayer;
- (void)setGoodsImageGradientLayer:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithModel:;
- (id)priceLabel;
- (void)setPriceLabel:;
@end
