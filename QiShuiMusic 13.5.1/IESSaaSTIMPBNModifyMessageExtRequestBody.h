@interface IESSaaSTIMPBNModifyMessageExtRequestBody : GPBMessage
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) q messageId;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) NSString ticket;
@property (nonatomic) BOOL hasTicket;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
+ (id)descriptor;
@end
