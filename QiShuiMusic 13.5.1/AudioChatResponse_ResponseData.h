@interface AudioChatResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString msgId;
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSInteger showIdentity;
@property (nonatomic) HTSLiveImage identityLabel;
@property (nonatomic) BOOL hasIdentityLabel;
+ (id)descriptor;
@end
