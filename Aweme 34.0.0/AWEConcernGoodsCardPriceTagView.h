@interface AWEConcernGoodsCardPriceTagView : UIView
@property (nonatomic) UILabel prefixLabel;
@property (nonatomic) UILabel rmbLabel;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) NSNumber fontSize;
@property (nonatomic) AWEConcernGoodsLifeFeedSpuPriceTag spuPriceTag;
- (id)rmbLabel;
- (void)setSpuPriceTag:;
- (id)spuPriceTag;
- (void)updateSpuPriceTag:;
- (double)calculateFullyTagWidth;
- (void)setRmbLabel:;
- (id)fontSize;
- (void)setFontSize:;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setPrefixLabel:;
- (double)labelFontSize;
- (id)prefixLabel;
- (void)setupViews;
- (id)priceLabel;
- (void)setPriceLabel:;
- (id)initWithFontSize:;
@end
