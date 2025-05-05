@interface IESLiveBidPaidLinkmicBidInfo : IESLivePBBaseMessage
@property (nonatomic) q bidPrice;
@property (nonatomic) q bidUsersUv;
@property (nonatomic) q serverLeftTime;
@property (nonatomic) NSString userName;
@property (nonatomic) q userId;
@property (nonatomic) HTSLiveImage userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (nonatomic) Q version;
@property (nonatomic) NSString secUserId;
+ (id)descriptor;
@end
