@interface TeamTask_SpecialGiftCountConfig : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) NSString giftName;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q maxGiftCountPerUser;
@property (nonatomic) q currentGiftCount;
+ (id)descriptor;
@end
