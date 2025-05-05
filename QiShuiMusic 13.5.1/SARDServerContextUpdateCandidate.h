@interface SARDServerContextUpdateCandidate : SABaseClientBoundCommand
@property (nonatomic) NSArray mappedDomainEntities;
@property (nonatomic) NSData nlContextUpdatePayload;
@property (nonatomic) NSData pegasusConversationContext;
@property (nonatomic) NSString resultCandidateId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)resultCandidateId;
- (void)setResultCandidateId:;
- (id)mappedDomainEntities;
- (void)setMappedDomainEntities:;
- (id)nlContextUpdatePayload;
- (void)setNlContextUpdatePayload:;
- (id)pegasusConversationContext;
- (void)setPegasusConversationContext:;
@end
