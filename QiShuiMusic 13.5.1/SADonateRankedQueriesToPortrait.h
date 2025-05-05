@interface SADonateRankedQueriesToPortrait : SABaseClientBoundCommand
@property (nonatomic) NSArray queryDonations;
@property (nonatomic) NSString resultCandidateId;
@property (nonatomic) NSString utterance;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)utterance;
- (void)setUtterance:;
- (id)resultCandidateId;
- (void)setResultCandidateId:;
- (id)queryDonations;
- (void)setQueryDonations:;
+ (id)donateRankedQueriesToPortrait;
+ (id)donateRankedQueriesToPortraitWithDictionary:context:;
@end
