@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction
@property (nonatomic) q conversationNotificationLevel;
@property (nonatomic) NSArray conversationIDs;
- (long long)signpostType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)conversationNotificationLevel;
- (id)initWithConversationIDs:conversationNotificationLevel:;
- (id)conversationIDs;
- (void)setConversationIDs:;
+ (BOOL)supportsSecureCoding;
@end
