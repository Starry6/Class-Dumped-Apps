@interface AREnvironmentProbeUpdate : NSObject
@property (nonatomic) AREnvironmentProbeManager manager;
@property (nonatomic) NSArray addedProbeAnchors;
@property (nonatomic) NSArray updatedProbeAnchors;
@property (nonatomic) NSArray removedProbeAnchors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)manager;
- (void)setManager:;
- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (id)addedProbeAnchors;
- (void)setAddedProbeAnchors:;
- (id)updatedProbeAnchors;
- (void)setUpdatedProbeAnchors:;
- (id)removedProbeAnchors;
- (void)setRemovedProbeAnchors:;
@end
