@interface CNDataMapperConfiguration : NSObject
@property (nonatomic) CNContactsEnvironment environment;
@property (nonatomic) CNManagedConfiguration managedConfiguration;
@property (nonatomic) NSObject<OS_tcc_identity> assumedIdentity;
@property (nonatomic) q identifierAuditMode;
- (id)managedConfiguration;
- (void)setEnvironment:;
- (void)setManagedConfiguration:;
- (void)setIdentifierAuditMode:;
- (id)assumedIdentity;
- (void)setAssumedIdentity:;
- (id)environment;
- (void).cxx_destruct;
- (id)description;
- (long long)identifierAuditMode;
- (id)initWithContactStoreConfiguration:;
@end
