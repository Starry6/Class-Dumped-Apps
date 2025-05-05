@interface LuckyBoxBonusReward : IESLivePBBaseMessage
@property (nonatomic) q count;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString name;
@property (nonatomic) q giftId;
+ (id)descriptor;
@end
