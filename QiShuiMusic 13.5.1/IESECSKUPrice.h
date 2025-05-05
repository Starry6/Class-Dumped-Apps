@interface IESECSKUPrice : NSObject
@property (nonatomic) NSNumber min;
@property (nonatomic) NSNumber max;
@property (nonatomic) NSNumber marketPrice;
@property (nonatomic) IESECDiscountPrice discount;
@property (nonatomic) IESECDiscountPrice groupbuyDiscount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMarketPrice:;
- (id)discount;
- (id)groupbuyDiscount;
- (BOOL)hasGapPrice;
- (id)marketPrice;
- (id)maxPrice;
- (id)minPrice;
- (void)setDiscount:;
- (void)setGroupbuyDiscount:;
- (id)min;
- (id)max;
- (void).cxx_destruct;
- (void)setMax:;
- (id)price;
- (void)setMin:;
@end
