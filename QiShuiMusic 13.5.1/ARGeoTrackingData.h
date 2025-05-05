@interface ARGeoTrackingData : NSObject
@property (nonatomic) ARLocationData enuOrigin;
@property (nonatomic) {?=[4]} vioFromENU;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (id)initWithENUOrigin:vioFromENU:;
- (id)enuOrigin;
- (id)vioFromENU;
+ (BOOL)supportsSecureCoding;
@end
