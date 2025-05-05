@interface HTSLiveFansclubClubTaskInfo_GiftInfo : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) q diamondCount;
@property (nonatomic) HTSLiveImage giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
+ (id)descriptor;
@end
