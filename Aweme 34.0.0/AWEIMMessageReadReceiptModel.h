@interface AWEIMMessageReadReceiptModel : NSObject
@property (nonatomic) NSString messageID;
@property (nonatomic) NSSet finishedParticipantIDs;
@property (nonatomic) NSSet expectedParticipantIDs;
- (id)finishedParticipantIDs;
- (id)expectedParticipantIDs;
- (void)setFinishedParticipantIDs:;
- (void)setExpectedParticipantIDs:;
- (id)messageID;
- (void)setMessageID:;
- (void).cxx_destruct;
@end
