@interface BisClientConfigContent : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) NSString type;
@property (nonatomic) NSString sampleMode;
@property (nonatomic) NSString androidcfg;
@property (nonatomic) NSString ioscfg;
@property (nonatomic) NSString h5cfg;
- (id)androidcfg;
- (id)h5cfg;
- (id)ioscfg;
- (void)setAndroidcfg:;
- (void)setH5cfg:;
- (void)setIoscfg:;
- (id)token;
- (void)setType:;
- (void)setToken:;
- (id)type;
- (void).cxx_destruct;
- (id)sampleMode;
- (void)setSampleMode:;
@end
