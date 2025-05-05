@interface VNSceneClassificationRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) VNSceneObservation sceneObservation;
@property (nonatomic) VNClassificationCustomHierarchy customHierarchy;
@property (nonatomic) Q maximumLeafObservations;
@property (nonatomic) Q maximumHierarchicalObservations;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (id)sceneObservation;
- (void)setSceneObservation:;
- (id)customHierarchy;
- (void)setCustomHierarchy:;
- (unsigned long long)maximumLeafObservations;
- (void)setMaximumLeafObservations:;
- (unsigned long long)maximumHierarchicalObservations;
- (void)setMaximumHierarchicalObservations:;
@end
