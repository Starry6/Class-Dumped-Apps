@interface AWEIMChatListServiceReadReceiptModel : NSObject
@property (nonatomic) NSSet finishedParticipantIDs;
@property (nonatomic) NSSet expectedParticipantIDs;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString messageID;
@property (nonatomic) NSNumber conversationShortID;
- (id)conversationShortID;
- (void)setConversationShortID:;
- (id)finishedParticipantIDs;
- (id)expectedParticipantIDs;
- (id)initWithConversationID:messageID:conversationShortID:finishedParticipantIDs:expectedParticipantIDs:;
- (void)setFinishedParticipantIDs:;
- (void)setExpectedParticipantIDs:;
- (id)messageID;
- (id)conversationID;
- (void)setMessageID:;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setConversationID:;
@end
