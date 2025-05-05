@interface SAReplayRequestFromDMHypothesis : SAStartRequest
@property (nonatomic) NSData dmHypothesis;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)dmHypothesis;
- (void)setDmHypothesis:;
@end
