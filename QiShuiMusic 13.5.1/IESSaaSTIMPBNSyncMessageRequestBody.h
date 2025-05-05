@interface IESSaaSTIMPBNSyncMessageRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) IESSaaSTIMPBNSyncContent syncContent;
@property (nonatomic) BOOL hasSyncContent;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) NSString ticket;
@property (nonatomic) BOOL hasTicket;
@property (nonatomic) NSString clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
@property (nonatomic) q targetMessageSender;
@property (nonatomic) BOOL hasTargetMessageSender;
+ (id)descriptor;
@end
