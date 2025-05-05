@interface HTSLivePaidLivePriceInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger startTime;
@property (nonatomic) NSInteger endTime;
@property (nonatomic) q price;
@property (nonatomic) NSInteger claimDdl;
@property (nonatomic) q skuId;
+ (id)descriptor;
@end
