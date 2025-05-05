@interface FriendChatResponse : IESLivePBBaseMessage
@property (nonatomic) FriendChatResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
