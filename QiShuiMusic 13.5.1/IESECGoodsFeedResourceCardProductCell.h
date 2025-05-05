@interface IESECGoodsFeedResourceCardProductCell : UIView
@property (nonatomic) BOOL isVersion3;
@property (nonatomic) UIImageView priceCurveImage;
@property (nonatomic) UIImageView priceDiscountBackgroundImage;
@property (nonatomic) @? clickBuyButtonBlock;
@property (nonatomic) @? clickProductCellBlock;
- (id)priceCurveImage;
- (id)clickBuyButtonBlock;
- (id)clickProductCellBlock;
- (void)enterGoodsDetail:;
- (void)enterSKU:;
- (BOOL)isVersion3;
- (id)priceDiscountBackgroundImage;
- (void)setClickBuyButtonBlock:;
- (void)setClickProductCellBlock:;
- (void)setIsVersion3:;
- (void)setPriceCurveImage:;
- (void)setPriceDiscountBackgroundImage:;
- (id)transferToMoreProperExpressionWithPrice:;
- (void)updateCellInOldVersionWithProduct:layout:;
- (void)updateCellInVersion3WithProduct:layout:;
- (void)updateWithProductModel:layout:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupSubviews;
@end
