@interface VNClassifyImageRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) VNClassificationCustomHierarchy customHierarchy;
@property (nonatomic) Q maximumLeafObservations;
@property (nonatomic) Q maximumHierarchicalObservations;
@property (nonatomic) Q imageCropAndScaleOption;
- (void).cxx_destruct;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
- (id)customHierarchy;
- (void)setCustomHierarchy:;
- (unsigned long long)maximumLeafObservations;
- (void)setMaximumLeafObservations:;
- (unsigned long long)maximumHierarchicalObservations;
- (void)setMaximumHierarchicalObservations:;
@end
