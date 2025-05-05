@interface IESSaaSTIMPBNGetTicketRequestBody : GPBMessage
@property (nonatomic) NSInteger ticketType;
@property (nonatomic) BOOL hasTicketType;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q toId;
@property (nonatomic) BOOL hasToId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
+ (id)descriptor;
@end
