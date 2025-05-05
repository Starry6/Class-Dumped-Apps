@interface IESLiveInviteListUserInfo : IESLivePBBaseMessage
@property (nonatomic) NSString last7DaysGiftCountText;
@property (nonatomic) NSString fuzzyFanTicket;
@property (nonatomic) BOOL isActive;
+ (id)descriptor;
@end
