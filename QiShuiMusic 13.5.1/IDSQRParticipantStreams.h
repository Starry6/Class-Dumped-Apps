@interface IDSQRParticipantStreams : NSObject
@property (nonatomic) NSNumber participantID;
@property (nonatomic) NSMutableArray streamArray;
@property (nonatomic) BOOL anyParticipant;
@property (nonatomic) BOOL anyStream;
- (void).cxx_destruct;
- (id)description;
- (id)participantID;
- (id)initWithParticipantID:streamArray:anyParticipant:anyStream:;
- (id)streamArray;
- (BOOL)anyParticipant;
- (BOOL)anyStream;
+ (id)streamWithParticipantID:streamArray:anyParticipant:anyStream:;
@end
