@interface WBSAutoFillAssociatedDomainsManager : NSObject
@property (nonatomic) NSArray domainsWithAssociatedCredentials;
@property (nonatomic) NSArray domainsToConsiderIdentical;
- (id)init;
- (void).cxx_destruct;
- (id)domainsWithAssociatedCredentialsForDomain:;
- (id)domainsToConsiderIdenticalToDomain:;
- (id)domainsWithAssociatedCredentials;
- (id)domainsToConsiderIdentical;
- (id)initWithDomainsWithAssociatedCredentials:;
- (id)initWithDomainsWithAssociatedCredentials:domainsToConsiderIdentical:;
- (void)setDomainsWithAssociatedCredentials:;
- (void)setDomainsToConsiderIdentical:;
- (void)_updateDomainToDomainsWithAssociatedCredentials;
- (void)_updateDomainToDomainsToConsiderIdentical;
@end
