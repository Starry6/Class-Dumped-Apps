@interface BDXSecureConfig : MTLModel
@property (nonatomic) BDXSecureSCCConfig sccConfig;
@property (nonatomic) BDXSecureSecLinkConfig seclinkConfig;
- (id)sccConfig;
- (id)seclinkConfig;
- (void)setSccConfig:;
- (void)setSeclinkConfig:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
