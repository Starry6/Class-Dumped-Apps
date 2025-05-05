@interface IESSaaSTIMPBNReactionMessageRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) IESSaaSTIMPBNReactionContent reactionContent;
@property (nonatomic) BOOL hasReactionContent;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) NSString ticket;
@property (nonatomic) BOOL hasTicket;
@property (nonatomic) NSString clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
+ (id)descriptor;
@end
