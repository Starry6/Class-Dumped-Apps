@interface HTSLiveScreenChatSendResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSString orderId;
@property (nonatomic) q leftDiamond;
@property (nonatomic) q msgId;
@property (nonatomic) NSString toast;
@property (nonatomic) q activityDanmuBackground;
@property (nonatomic) NSInteger showIdentity;
@property (nonatomic) HTSLiveImage identityLabel;
@property (nonatomic) BOOL hasIdentityLabel;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
+ (id)descriptor;
@end
