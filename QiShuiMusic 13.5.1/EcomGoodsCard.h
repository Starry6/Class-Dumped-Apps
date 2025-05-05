@interface EcomGoodsCard : IESLivePBBaseMessage
@property (nonatomic) q productId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString cover;
@property (nonatomic) EcomPrice minPrice;
@property (nonatomic) BOOL hasMinPrice;
@property (nonatomic) Coupon coupon;
@property (nonatomic) BOOL hasCoupon;
@property (nonatomic) q promotionId;
@property (nonatomic) q jumpDestination;
@property (nonatomic) q cardType;
@property (nonatomic) Redpack redpack;
@property (nonatomic) BOOL hasRedpack;
+ (id)descriptor;
@end
