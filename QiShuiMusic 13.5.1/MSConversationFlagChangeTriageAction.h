@interface MSConversationFlagChangeTriageAction : MSFlagChangeTriageAction
@property (nonatomic) EMMessage referenceMessage;
- (id)_changeAction;
- (id)messageFlags;
- (id)initWithReferenceMessage:delegate:reason:;
- (id)referenceMessage;
- (void)_toggleFlagWithBuilder:;
+ (long long)conversationNotificationLevel;
@end
