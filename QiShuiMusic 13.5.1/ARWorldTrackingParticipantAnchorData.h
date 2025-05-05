@interface ARWorldTrackingParticipantAnchorData : NSObject
@property (nonatomic) NSSet anchors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)anchors;
- (id)anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (id)initWithAnchors:;
@end
