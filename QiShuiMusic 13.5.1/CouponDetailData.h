@interface CouponDetailData : IESLivePBBaseMessage
@property (nonatomic) NSString product;
@property (nonatomic) NSString discount;
+ (id)descriptor;
@end
