@interface IESLiveBidPaidLinkmicBidRecord : IESLivePBBaseMessage
@property (nonatomic) q bidPrice;
@property (nonatomic) NSString userName;
@property (nonatomic) q userId;
@property (nonatomic) HTSLiveImage userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (nonatomic) BOOL isStartPrice;
@property (nonatomic) NSString secUserId;
+ (id)descriptor;
@end
