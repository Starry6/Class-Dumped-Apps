@interface LuckyBoxBonus_ConsumedGift : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) q diamondCount;
@property (nonatomic) NSString icon;
@property (nonatomic) q count;
@property (nonatomic) NSString name;
+ (id)descriptor;
@end
