@interface IESMMAudioSamiConfig : IESMMAudioEffectConfig
@property (nonatomic) q type;
@property (nonatomic) NSString modelPath;
@property (nonatomic) NSString configJson;
@property (nonatomic) NSString denoiseLevel;
@property (nonatomic) NSString createConfigInfo;
@property (nonatomic) NSString snrThreshold;
@property (nonatomic) NSString snrFilePath;
@property (nonatomic) BOOL enableSNR;
- (void)setSnrFilePath:;
- (id)configJson;
- (id)createConfigInfo;
- (id)denoiseLevel;
- (BOOL)enableSNR;
- (void)setConfigJson:;
- (void)setCreateConfigInfo:;
- (void)setDenoiseLevel:;
- (void)setEnableSNR:;
- (void)setSnrThreshold:;
- (void)setupDefaultValues;
- (id)snrFilePath;
- (id)snrThreshold;
- (id)toDicInfo;
- (void)setModelPath:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (id)modelPath;
@end
