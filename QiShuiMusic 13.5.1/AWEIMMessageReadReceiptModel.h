@interface AWEIMMessageReadReceiptModel : NSObject
@property (nonatomic) NSString messageID;
@property (nonatomic) NSSet finishedParticipantIDs;
@property (nonatomic) NSSet expectedParticipantIDs;
- (id)expectedParticipantIDs;
- (id)finishedParticipantIDs;
- (void)setExpectedParticipantIDs:;
- (void)setFinishedParticipantIDs:;
- (id)messageID;
- (void).cxx_destruct;
- (void)setMessageID:;
@end
