@interface IESSaaSTIMPBNSendMessageRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) NSString ticket;
@property (nonatomic) BOOL hasTicket;
@property (nonatomic) NSString clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
@property (nonatomic) GPBInt64Array mentionedUsersArray;
@property (nonatomic) Q mentionedUsersArray_Count;
@property (nonatomic) BOOL ignoreBadgeCount;
@property (nonatomic) BOOL hasIgnoreBadgeCount;
@property (nonatomic) IESSaaSTIMPBNReferencedMessageInfo refMsgInfo;
@property (nonatomic) BOOL hasRefMsgInfo;
@property (nonatomic) NSMutableDictionary clientExt;
@property (nonatomic) Q clientExt_Count;
+ (id)descriptor;
@end
