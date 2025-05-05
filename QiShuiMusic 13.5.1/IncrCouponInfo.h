@interface IncrCouponInfo : IESLivePBBaseMessage
@property (nonatomic) q value;
@property (nonatomic) q threshold;
@property (nonatomic) q taskTime;
+ (id)descriptor;
@end
