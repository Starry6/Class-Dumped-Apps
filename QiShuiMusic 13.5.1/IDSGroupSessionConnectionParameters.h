@interface IDSGroupSessionConnectionParameters : NSObject
@property (nonatomic) NSString multiplexer;
@property (nonatomic) NSString sessionID;
@property (nonatomic) Q participantID;
@property (nonatomic) NSData salt;
- (void)setSessionID:;
- (id)sessionID;
- (id)stringRepresentation;
- (id)salt;
- (void)setSalt:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStringRepresentation:;
- (unsigned long long)participantID;
- (BOOL)isEqual:;
- (void)setParticipantID:;
- (void)setMultiplexer:;
- (BOOL)isEqualToGroupSessionConnectionParameters:;
- (id)multiplexer;
@end
