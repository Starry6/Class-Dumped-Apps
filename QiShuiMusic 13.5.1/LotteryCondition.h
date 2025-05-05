@interface LotteryCondition : IESLivePBBaseMessage
@property (nonatomic) q conditionId;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString content;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString description_p;
@property (nonatomic) q giftId;
@property (nonatomic) q giftCount;
@property (nonatomic) NSString giftName;
@property (nonatomic) q needDiamondCount;
@property (nonatomic) q minFansLevel;
@property (nonatomic) NSString remarks;
@property (nonatomic) NSString bizInfo;
+ (id)descriptor;
@end
