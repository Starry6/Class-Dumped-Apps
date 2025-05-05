@interface IESSaaSTIMPBNSendMessageResponseBody : GPBMessage
@property (nonatomic) q serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSString clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
@property (nonatomic) q checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (nonatomic) NSString checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (nonatomic) NSString filteredContent;
@property (nonatomic) BOOL hasFilteredContent;
@property (nonatomic) BOOL isAsyncSend;
@property (nonatomic) BOOL hasIsAsyncSend;
@property (nonatomic) NSString newTicket;
@property (nonatomic) BOOL hasNewTicket;
@property (nonatomic) IESSaaSTIMPBNConversationInfoV2 conversation;
@property (nonatomic) BOOL hasConversation;
+ (id)descriptor;
@end
