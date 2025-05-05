@interface IESLiveSaaSPBChatReplyRespInfo : GPBMessage
@property (nonatomic) q replyMsgId;
@property (nonatomic) q replyId;
@property (nonatomic) IESLiveSaaSPBText replyText;
@property (nonatomic) BOOL hasReplyText;
@property (nonatomic) q replyUid;
@property (nonatomic) NSString replyWebcastUid;
+ (id)descriptor;
@end
