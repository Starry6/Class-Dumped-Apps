@interface IESLivePaidLinkmicDiscountInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger discountMode;
@property (nonatomic) q discountAmount;
@property (nonatomic) NSString discountText;
+ (id)descriptor;
@end
