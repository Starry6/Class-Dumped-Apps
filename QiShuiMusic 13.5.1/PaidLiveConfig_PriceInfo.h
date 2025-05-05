@interface PaidLiveConfig_PriceInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger payType;
@property (nonatomic) q price;
@property (nonatomic) NSInteger rightDuration;
+ (id)descriptor;
@end
