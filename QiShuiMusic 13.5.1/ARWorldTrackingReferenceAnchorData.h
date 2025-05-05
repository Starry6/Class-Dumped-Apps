@interface ARWorldTrackingReferenceAnchorData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) NSSet updatedAnchors;
@property (nonatomic) NSSet addedAnchors;
@property (nonatomic) NSSet removedAnchors;
@property (nonatomic) NSSet externalAnchors;
@property (nonatomic) NSSet receivedAnchors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (BOOL)isEqual:;
- (id)anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (id)externalAnchorsWithReferenceOriginTransform:existingAnchors:;
- (id)updatedAnchors;
- (id)removedAnchors;
- (id)initWithUpdatedAnchors:addedAnchors:removedAnchors:externalAnchors:;
- (id)addedAnchors;
- (id)externalAnchors;
- (id)receivedAnchors;
- (void)setReceivedAnchors:;
+ (BOOL)supportsSecureCoding;
@end
