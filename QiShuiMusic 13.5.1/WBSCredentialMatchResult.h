@interface WBSCredentialMatchResult : NSObject
@property (nonatomic) NSArray exactMatches;
@property (nonatomic) NSArray potentialMatches;
@property (nonatomic) NSArray associatedDomainMatches;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)exactMatches;
- (id)initWithExactMatches:potentialMatches:associatedDomainMatches:;
- (id)potentialMatches;
- (id)associatedDomainMatches;
@end
