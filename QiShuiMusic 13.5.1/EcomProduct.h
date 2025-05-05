@interface EcomProduct : IESLivePBBaseMessage
@property (nonatomic) q promotionId;
@property (nonatomic) q productId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString coverImage;
@property (nonatomic) EcomPrice price;
@property (nonatomic) BOOL hasPrice;
@property (nonatomic) q regularPrice;
@property (nonatomic) q depositPrice;
+ (id)descriptor;
@end
