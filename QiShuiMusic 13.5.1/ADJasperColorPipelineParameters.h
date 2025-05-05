@interface ADJasperColorPipelineParameters : ADPipelineParameters
@property (nonatomic) ADJasperPointCloudFilterParameters pointCloudFilter;
@property (nonatomic) ADAggregationParameters aggregationParameters;
@property (nonatomic) Q confidenceUnits;
@property (nonatomic) float confidenceBucketingLowThreshold;
@property (nonatomic) float confidenceBucketingHighThreshold;
@property (nonatomic) float defaultAlphaForDepthWarping;
- (id)init;
- (void).cxx_destruct;
- (id)aggregationParameters;
- (id)pointCloudFilter;
- (void)setPointCloudFilter:;
- (void)setAggregationParameters:;
- (unsigned long long)confidenceUnits;
- (void)setConfidenceUnits:;
- (float)confidenceBucketingLowThreshold;
- (void)setConfidenceBucketingLowThreshold:;
- (float)confidenceBucketingHighThreshold;
- (void)setConfidenceBucketingHighThreshold:;
- (float)defaultAlphaForDepthWarping;
- (void)setDefaultAlphaForDepthWarping:;
@end
