@interface HTSLiveGiftInfo : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) HTSLiveImage giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (nonatomic) q diamondCount;
+ (id)descriptor;
@end
