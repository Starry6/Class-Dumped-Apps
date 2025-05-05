@interface SARDFlowOutputCandidate : SABaseClientBoundCommand
@property (nonatomic) NSArray payload;
@property (nonatomic) NSString resultCandidateId;
@property (nonatomic) SARDServerContextUpdateCandidate serverContextUpdateCandidate;
@property (nonatomic) BOOL shouldNotMitigateAsFalseTrigger;
- (id)payload;
- (id)groupIdentifier;
- (void)setPayload:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)resultCandidateId;
- (void)setResultCandidateId:;
- (id)serverContextUpdateCandidate;
- (void)setServerContextUpdateCandidate:;
- (BOOL)shouldNotMitigateAsFalseTrigger;
- (void)setShouldNotMitigateAsFalseTrigger:;
@end
