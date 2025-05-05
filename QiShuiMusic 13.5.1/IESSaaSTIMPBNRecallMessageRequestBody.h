@interface IESSaaSTIMPBNRecallMessageRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
+ (id)descriptor;
@end
