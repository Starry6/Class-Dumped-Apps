@interface IMTUConversationChatItem : IMTranscriptChatItem
@property (nonatomic) TUConversation tuConversation;
@property (nonatomic) NSUUID tuConversationUUID;
@property (nonatomic) IMHandle conversationInitiator;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) NSDate time;
@property (nonatomic) Q conversationAVMode;
- (id)time;
- (void).cxx_destruct;
- (BOOL)canDelete;
- (id)activeCall;
- (id)copyWithZone:;
- (BOOL)isFromMe;
- (id)conversationInitiator;
- (unsigned long long)conversationAVMode;
- (id)tuConversation;
- (id)tuConversationUUID;
- (id)_initWithItem:conversationInitiator:;
@end
