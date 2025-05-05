@interface IESECGoodsFeedDiscountConfigure : NSObject
@property (nonatomic) IESECDiscountPrice discount;
@property (nonatomic) q type;
@property (nonatomic) q state;
@property (nonatomic) BOOL hasGapPrice;
@property (nonatomic) BOOL hideDashLine;
@property (nonatomic) NSNumber minPrice;
@property (nonatomic) BOOL hideBackground;
- (void)setHasGapPrice:;
- (id)discount;
- (BOOL)hasGapPrice;
- (BOOL)hideBackground;
- (BOOL)hideDashLine;
- (id)minPrice;
- (void)setDiscount:;
- (void)setHideBackground:;
- (void)setHideDashLine:;
- (void)setMinPrice:;
- (void)setState:;
- (void)setType:;
- (long long)type;
- (long long)state;
- (void).cxx_destruct;
@end
