@interface IMParticipantChangeChatItem : IMTranscriptChatItem
@property (nonatomic) q changeType;
@property (nonatomic) IMHandle sender;
@property (nonatomic) IMHandle otherHandle;
@property (nonatomic) NSUUID activeTelephonyConversationUUID;
- (long long)changeType;
- (id)sender;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)otherHandle;
- (id)activeTelephonyConversationUUID;
- (void)setActiveTelephonyConversationUUID:;
- (id)_initWithItem:sender:otherHandle:;
- (id)_initWithItem:sender:otherHandle:context:;
@end
