@interface VoucherPrizeInfo : IESLivePBBaseMessage
@property (nonatomic) NSString prizeAmount;
@property (nonatomic) NSString prizeBatchName;
@property (nonatomic) q expireTime;
@property (nonatomic) NSString prizeUnit;
@property (nonatomic) NSString desc;
+ (id)descriptor;
@end
