@interface ScreenChatResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSString orderId;
@property (nonatomic) NSString content;
@property (nonatomic) q leftDiamond;
@property (nonatomic) q msgId;
@property (nonatomic) NSData msg;
@property (nonatomic) NSInteger showIdentity;
@property (nonatomic) HTSLiveImage identityLabel;
@property (nonatomic) BOOL hasIdentityLabel;
@property (nonatomic) BOOL isSendTcs;
@property (nonatomic) BOOL result;
+ (id)descriptor;
@end
