@interface LotteryLuckyUser_Award_PrizeDetail : IESLivePBBaseMessage
@property (nonatomic) NSInteger interestShowType;
@property (nonatomic) NSString interestShowUnit;
@property (nonatomic) NSString interestValue;
@property (nonatomic) NSString prizeName;
@property (nonatomic) NSString prizeDescription;
+ (id)descriptor;
@end
