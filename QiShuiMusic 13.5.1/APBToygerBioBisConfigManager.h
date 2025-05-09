@interface APBToygerBioBisConfigManager : NSObject
@property (nonatomic) NSInteger sampleMode;
@property (nonatomic) BOOL isLogin;
@property (nonatomic) NSString bisToken;
@property (nonatomic) NSString ioscfg;
@property (nonatomic) NSString iosvoicecfg;
@property (nonatomic) NSString content;
@property (nonatomic) NSString sign;
@property (nonatomic) APBToygerRemoteConfig bisConfig;
@property (nonatomic) APBToygerSoluCfg solucfg;
@property (nonatomic) NSString apBioSecPublicKey;
- (void)setIosvoicecfg:;
- (id)solucfg;
- (id)apBioSecPublicKey;
- (id)bisConfig;
- (id)bisToken;
- (id)initWithBisConfig:;
- (id)initWithBisDocConfig:;
- (id)ioscfg;
- (id)iosvoicecfg;
- (void)priKeySwitch;
- (void)setApBioSecPublicKey:;
- (void)setBisConfig:;
- (void)setBisToken:;
- (void)setIoscfg:;
- (void)setIsLogin:;
- (void)setSign:;
- (void)setSolucfg:;
- (void)setTestPubKey;
- (id)sign;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (int)sampleMode;
- (void)setSampleMode:;
- (BOOL)isLogin;
+ (id)getDictfrom:;
@end
