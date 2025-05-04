@interface AWEIMFeedExternalRefFakeDisplayMessage : AWEIMMessage
@property (nonatomic) AWEIMMessage<IESIMExternalRefMessageProtocol> realMessage;
@property (nonatomic) IESIMExternalRefContent externalRef;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)serverMessageID;
- (id)syncedExt;
- (id)localExt;
- (void)setSyncedExt:;
- (void)setLocalExt:;
- (BOOL)isCombineShareSubMessage;
- (id)externalRef;
- (void)setExternalRef:;
- (id)realMessage;
- (void)setRealMessage:;
- (id)initWithRealMessage:;
- (id)messageID;
- (id)conversationID;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
