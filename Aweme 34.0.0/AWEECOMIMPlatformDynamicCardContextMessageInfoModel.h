@interface AWEECOMIMPlatformDynamicCardContextMessageInfoModel : MTLModel
@property (nonatomic) NSString serverMessageId;
@property (nonatomic) NSString clientMessageId;
@property (nonatomic) NSString senderRole;
@property (nonatomic) NSString toUid;
@property (nonatomic) NSString fromUid;
@property (nonatomic) NSString isSender;
@property (nonatomic) NSString messageTalkId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fromUid;
- (id)serverMessageId;
- (void)setServerMessageId:;
- (id)clientMessageId;
- (void)setSenderRole:;
- (id)senderRole;
- (void)setClientMessageId:;
- (id)toUid;
- (void)setToUid:;
- (void)setFromUid:;
- (id)messageTalkId;
- (void)setMessageTalkId:;
- (void).cxx_destruct;
- (id)isSender;
- (void)setIsSender:;
+ (id)JSONKeyPathsByPropertyKey;
@end
