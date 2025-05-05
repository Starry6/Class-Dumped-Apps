@interface IESLiveChatReplyRespInfo : IESLivePBBaseMessage
@property (nonatomic) q replyMsgId;
@property (nonatomic) q replyId;
@property (nonatomic) HTSLiveText replyText;
@property (nonatomic) BOOL hasReplyText;
@property (nonatomic) q replyUid;
@property (nonatomic) NSString replyWebcastUid;
+ (id)descriptor;
@end
