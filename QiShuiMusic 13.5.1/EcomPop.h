@interface EcomPop : IESLivePBBaseMessage
@property (nonatomic) q productId;
@property (nonatomic) q promotionId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString cover;
@property (nonatomic) EcomPrice minPrice;
@property (nonatomic) BOOL hasMinPrice;
@property (nonatomic) NSString sellingPoint;
@property (nonatomic) NSString jumanjiJson;
+ (id)descriptor;
@end
