@interface ARFaceTrackingResults : NSObject
@property (nonatomic) NSArray trackedFaces;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (id)trackedFaces;
- (void)setTrackedFaces:;
+ (BOOL)supportsSecureCoding;
@end
