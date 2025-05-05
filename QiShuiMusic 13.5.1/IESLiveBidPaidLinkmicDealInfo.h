@interface IESLiveBidPaidLinkmicDealInfo : IESLivePBBaseMessage
@property (nonatomic) q winPrice;
@property (nonatomic) NSString userName;
@property (nonatomic) q userId;
@property (nonatomic) HTSLiveImage userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (nonatomic) NSString secUserId;
+ (id)descriptor;
@end
