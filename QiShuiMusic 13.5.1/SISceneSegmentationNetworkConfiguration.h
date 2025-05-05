@interface SISceneSegmentationNetworkConfiguration : SINetworkConfiguration
@property (nonatomic) q networkModeEnum;
@property (nonatomic) q modelConfig;
@property (nonatomic) BOOL isResampleOutput;
@property (nonatomic) float uncertaintyThreshold;
- (id)init;
- (float)uncertaintyThreshold;
- (void)setUncertaintyThreshold:;
- (void)setNetworkModeEnum:;
- (void)setModelConfig:;
- (long long)networkModeEnum;
- (long long)modelConfig;
- (BOOL)isResampleOutput;
- (void)setIsResampleOutput:;
@end
