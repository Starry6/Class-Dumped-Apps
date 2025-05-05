@interface MFDAMessage : MFMailMessage
@property (nonatomic) DAMailMessage DAMailMessage;
- (id)messageBody;
- (void).cxx_destruct;
- (unsigned long long)messageSize;
- (id)mailbox;
- (id)headers;
- (id)remoteID;
- (unsigned long long)messageFlags;
- (id)remoteMailboxURL;
- (id)externalConversationID;
- (BOOL)messageData:messageSize:isComplete:downloadIfNecessary:;
- (BOOL)messageDataHolder:messageSize:isComplete:downloadIfNecessary:;
- (id)headersIfAvailable;
- (id)initWithDAMailMessage:mailbox:;
- (id)DAMailMessage;
@end
