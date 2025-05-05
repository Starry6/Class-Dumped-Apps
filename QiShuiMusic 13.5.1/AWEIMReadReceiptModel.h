@interface AWEIMReadReceiptModel : NSObject
@property (nonatomic) AWEIMReadReceiptIdentifier identifier;
@property (nonatomic) NSSet finishedParticipantIDs;
@property (nonatomic) NSSet expectedParticipantIDs;
@property (nonatomic) BOOL hasDelay;
- (id)expectedParticipantIDs;
- (id)finishedParticipantIDs;
- (id)initWithConversationID:messageID:finishedParticipantIDs:expectedParticipantIDs:;
- (BOOL)isAllRead;
- (id)identifier;
- (double)progress;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasDelay:;
- (BOOL)hasDelay;
@end
