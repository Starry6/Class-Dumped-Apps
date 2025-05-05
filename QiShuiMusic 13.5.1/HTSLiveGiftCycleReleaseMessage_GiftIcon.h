@interface HTSLiveGiftCycleReleaseMessage_GiftIcon : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
+ (id)descriptor;
@end
