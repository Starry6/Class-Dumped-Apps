@interface INSendMessageIntentDonationMetadata : INIntentDonationMetadata
@property (nonatomic) BOOL businessChat;
@property (nonatomic) BOOL mentionsCurrentUser;
@property (nonatomic) BOOL replyToCurrentUser;
@property (nonatomic) BOOL notifyRecipientAnyway;
@property (nonatomic) Q recipientCount;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)_init;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)mentionsCurrentUser;
- (void)setMentionsCurrentUser:;
- (BOOL)isReplyToCurrentUser;
- (void)setReplyToCurrentUser:;
- (BOOL)notifyRecipientAnyway;
- (void)setNotifyRecipientAnyway:;
- (unsigned long long)recipientCount;
- (void)setRecipientCount:;
- (BOOL)isBusinessChat;
- (void)setBusinessChat:;
+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;
@end
