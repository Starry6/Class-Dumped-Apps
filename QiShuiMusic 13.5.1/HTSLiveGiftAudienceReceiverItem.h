@interface HTSLiveGiftAudienceReceiverItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q score;
@property (nonatomic) BOOL giftAuth;
@property (nonatomic) NSString offReasonToast;
+ (id)descriptor;
@end
