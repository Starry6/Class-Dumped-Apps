@interface IESECGoodsDiscountConfigure : NSObject
@property (nonatomic) IESECDiscountPrice discount;
@property (nonatomic) q type;
@property (nonatomic) q state;
@property (nonatomic) BOOL hasGapPrice;
@property (nonatomic) BOOL hideDashLine;
@property (nonatomic) NSNumber minPrice;
@property (nonatomic) q discountStyle;
@property (nonatomic) q showPriceStyle;
- (void)setHasGapPrice:;
- (id)discount;
- (long long)discountStyle;
- (BOOL)hasGapPrice;
- (BOOL)hideDashLine;
- (id)minPrice;
- (void)setDiscount:;
- (void)setDiscountStyle:;
- (void)setHideDashLine:;
- (void)setMinPrice:;
- (void)setShowPriceStyle:;
- (long long)showPriceStyle;
- (void)setState:;
- (void)setType:;
- (long long)type;
- (long long)state;
- (void).cxx_destruct;
@end
