@interface BDXSecureSCCConfig : MTLModel
@property (nonatomic) <BDXSCCSecureDataSource> dataSource;
@property (nonatomic) <BDXSCCSecureDelegate> delegate;
@property (nonatomic) BDXSecureSCCJumpAppConfig appJumpConfig;
@property (nonatomic) BDXSCCSecureCheckingConfig secureCheckingConfig;
- (id)appJumpConfig;
- (id)secureCheckingConfig;
- (void)setAppJumpConfig:;
- (void)setSecureCheckingConfig:;
- (void)setDataSource:;
- (id)init;
- (void)setDelegate:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
