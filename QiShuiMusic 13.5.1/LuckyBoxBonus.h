@interface LuckyBoxBonus : IESLivePBBaseMessage
@property (nonatomic) LuckyBoxBonus_ConsumedGift consumedGift;
@property (nonatomic) BOOL hasConsumedGift;
@property (nonatomic) NSInteger openType;
@property (nonatomic) NSString boxIdStr;
+ (id)descriptor;
@end
