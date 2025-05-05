@interface ADJasperColorStillsPipelineParameters : ADPipelineParameters
@property (nonatomic) ADJasperPointCloudFilterParameters pointCloudFilter;
@property (nonatomic) ADJasperPointCloudFilterParameters pointCloudFilterForTransformCorrection;
- (id)init;
- (void).cxx_destruct;
- (id)pointCloudFilter;
- (void)setPointCloudFilter:;
- (id)pointCloudFilterForTransformCorrection;
- (void)setPointCloudFilterForTransformCorrection:;
@end
