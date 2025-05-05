@interface IMCommLimitsPolicyCache : NSObject
@property (nonatomic) NSMutableDictionary conversationContextToParticipantIDsHash;
@property (nonatomic) NSMutableDictionary participantIDsHashToConversationContext;
@property (nonatomic) NSMutableDictionary participantIDsHashToChatIdentifier;
@property (nonatomic) NSMutableDictionary chatIdentifierToParticipantIDsHash;
- (id)init;
- (void).cxx_destruct;
- (id)conversationContextForChat:;
- (void)addTrackingForChat:participantIDsHash:;
- (void)removeTrackingForChat:;
- (BOOL)isFetchingCommLimitsPolicyForChat:;
- (id)chatForParticipantIDsHash:;
- (id)chatForConversationContext:;
- (void)addTrackingForConversationContext:forParticipantIDsHash:;
- (void)addSentinelContextForParticipantIDsHash:;
- (id)contextForParticipantIDsHash:;
- (id)conversationContextToParticipantIDsHash;
- (void)setConversationContextToParticipantIDsHash:;
- (id)participantIDsHashToConversationContext;
- (void)setParticipantIDsHashToConversationContext:;
- (id)participantIDsHashToChatIdentifier;
- (void)setParticipantIDsHashToChatIdentifier:;
- (id)chatIdentifierToParticipantIDsHash;
- (void)setChatIdentifierToParticipantIDsHash:;
@end
