@interface SARDAsrOutcomeCandidate : SASResultCandidate
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)asrOutcomeCandidate;
+ (id)asrOutcomeCandidateWithDictionary:context:;
@end
