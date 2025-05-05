@interface NEIKEv2IKESAProposal : NSObject
@property (nonatomic) NSArray encryptionProtocols;
@property (nonatomic) NSArray integrityProtocols;
@property (nonatomic) NSArray prfProtocols;
@property (nonatomic) NSArray dhProtocols;
@property (nonatomic) NSArray eapProtocols;
@property (nonatomic) Q lifetimeSeconds;
- (id)init;
- (id)descriptionWithIndent:options:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)encryptionProtocols;
- (void)setEncryptionProtocols:;
- (id)integrityProtocols;
- (void)setIntegrityProtocols:;
- (id)prfProtocols;
- (void)setPrfProtocols:;
- (id)dhProtocols;
- (void)setDhProtocols:;
- (id)eapProtocols;
- (void)setEapProtocols:;
- (unsigned long long)lifetimeSeconds;
- (void)setLifetimeSeconds:;
@end
