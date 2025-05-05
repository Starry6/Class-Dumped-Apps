@interface SIPersonDetectorNetworkConfiguration : SINetworkConfiguration
@property (nonatomic) q networkModeEnum;
@property (nonatomic) q modelConfig;
- (id)init;
- (void)setNetworkModeEnum:;
- (void)setModelConfig:;
- (long long)networkModeEnum;
- (long long)modelConfig;
@end
