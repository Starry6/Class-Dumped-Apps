@interface IESLiveNormalPaidLinkmicInfo : IESLivePBBaseMessage
@property (nonatomic) q paidCount;
@property (nonatomic) q limitedTime;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSInteger addPriceStrategy;
@property (nonatomic) q addPriceValue;
@property (nonatomic) q addPriceMultiple;
+ (id)descriptor;
@end
