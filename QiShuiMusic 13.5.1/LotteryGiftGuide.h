@interface LotteryGiftGuide : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) q giftDiamondCount;
@property (nonatomic) NSString giftName;
+ (id)descriptor;
@end
