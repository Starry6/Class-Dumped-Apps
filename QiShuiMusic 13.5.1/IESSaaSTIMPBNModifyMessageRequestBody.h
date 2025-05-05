@interface IESSaaSTIMPBNModifyMessageRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSString serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
@property (nonatomic) NSString ticket;
@property (nonatomic) BOOL hasTicket;
+ (id)descriptor;
@end
