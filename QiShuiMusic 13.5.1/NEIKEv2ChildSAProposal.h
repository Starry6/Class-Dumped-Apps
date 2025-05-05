@interface NEIKEv2ChildSAProposal : NSObject
@property (nonatomic) Q protocol;
@property (nonatomic) NSArray encryptionProtocols;
@property (nonatomic) NSArray integrityProtocols;
@property (nonatomic) NSArray dhProtocols;
@property (nonatomic) Q lifetimeSeconds;
@property (nonatomic) BOOL opportunisticPFS;
- (unsigned long long)protocol;
- (void)setProtocol:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)encryptionProtocols;
- (void)setEncryptionProtocols:;
- (id)integrityProtocols;
- (void)setIntegrityProtocols:;
- (id)dhProtocols;
- (void)setDhProtocols:;
- (unsigned long long)lifetimeSeconds;
- (void)setLifetimeSeconds:;
- (BOOL)opportunisticPFS;
- (void)setOpportunisticPFS:;
@end
