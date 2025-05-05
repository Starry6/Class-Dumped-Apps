@interface AWESecurityConfig : NSObject
@property (nonatomic) BDTuringConfig turingConfig;
@property (nonatomic) q regionType;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString language;
@property (nonatomic) NSString channel;
@property (nonatomic) BOOL enableTTNet;
@property (nonatomic) BOOL needConfigSelas;
- (void)setEnableTTNet:;
- (BOOL)needConfigSelas;
- (BOOL)enableTTNet;
- (void)setNeedConfigSelas:;
- (void)setTuringConfig:;
- (id)turingConfig;
- (void)setChannel:;
- (id)init;
- (id)appId;
- (id)channel;
- (void)setLanguage:;
- (id)language;
- (void)setAppId:;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (long long)regionType;
- (void)setRegionType:;
+ (id)configWithBlock:;
@end
