@interface ADJasperColorV2PipelineParameters : ADPipelineParameters
@property (nonatomic) ADJasperPointCloudFilterParameters pointCloudFilter;
@property (nonatomic) float uncertaintyThreshold;
@property (nonatomic) I minRequiredJasperPoints;
@property (nonatomic) float maxDepthThresholdForInvalidUncertainty;
@property (nonatomic) float minDepthThresholdForInvalidUncertainty;
@property (nonatomic) BOOL outputHighConfidencePixelsOnly;
- (id)init;
- (void).cxx_destruct;
- (void)setOutputHighConfidencePixelsOnly:;
- (float)uncertaintyThreshold;
- (id)initForPrioritization:;
- (id)pointCloudFilter;
- (void)setPointCloudFilter:;
- (void)setUncertaintyThreshold:;
- (unsigned int)minRequiredJasperPoints;
- (void)setMinRequiredJasperPoints:;
- (float)maxDepthThresholdForInvalidUncertainty;
- (void)setMaxDepthThresholdForInvalidUncertainty:;
- (float)minDepthThresholdForInvalidUncertainty;
- (void)setMinDepthThresholdForInvalidUncertainty:;
- (BOOL)outputHighConfidencePixelsOnly;
@end
