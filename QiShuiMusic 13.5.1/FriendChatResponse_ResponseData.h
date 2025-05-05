@interface FriendChatResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) q msgId;
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString msgIdStr;
+ (id)descriptor;
@end
