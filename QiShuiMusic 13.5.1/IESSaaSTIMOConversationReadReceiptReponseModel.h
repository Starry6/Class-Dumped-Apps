@interface IESSaaSTIMOConversationReadReceiptReponseModel : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) q conversationShortID;
@property (nonatomic) NSString messageID;
@property (nonatomic) q finishedCount;
@property (nonatomic) q expectedCount;
@property (nonatomic) NSSet finishedParticipantIDs;
@property (nonatomic) NSSet expectedParticipantIDs;
- (long long)conversationShortID;
- (id)expectedParticipantIDs;
- (long long)finishedCount;
- (id)finishedParticipantIDs;
- (void)setConversationShortID:;
- (void)setExpectedParticipantIDs:;
- (void)setFinishedCount:;
- (void)setFinishedParticipantIDs:;
- (id)messageID;
- (void).cxx_destruct;
- (void)setMessageID:;
- (id)conversationID;
- (void)setConversationID:;
- (long long)expectedCount;
- (void)setExpectedCount:;
@end
