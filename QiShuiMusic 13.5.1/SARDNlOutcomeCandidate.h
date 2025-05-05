@interface SARDNlOutcomeCandidate : SABaseClientBoundCommand
@property (nonatomic) NSData nlIntentHierarchyContainerProto;
@property (nonatomic) NSString resultCandidateId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)resultCandidateId;
- (void)setResultCandidateId:;
- (id)nlIntentHierarchyContainerProto;
- (void)setNlIntentHierarchyContainerProto:;
+ (id)nlOutcomeCandidate;
+ (id)nlOutcomeCandidateWithDictionary:context:;
@end
