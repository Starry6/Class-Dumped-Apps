@interface IESLiveSaaSPBLotteryPrize : GPBMessage
@property (nonatomic) q prizeId;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString name;
@property (nonatomic) NSString image;
@property (nonatomic) NSString prizeDescription;
+ (id)descriptor;
@end
