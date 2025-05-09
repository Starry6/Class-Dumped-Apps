@interface ARFaceAnchor : ARAnchor
@property (nonatomic) <ARFaceTrackingDataProtocol> trackingData;
@property (nonatomic) BOOL isTracked;
@property (nonatomic) NSError trackingError;
@property (nonatomic) ARFaceGeometry geometry;
@property (nonatomic) {?=[4]} leftEyeTransform;
@property (nonatomic) {?=[4]} rightEyeTransform;
@property (nonatomic)  lookAtPoint;
@property (nonatomic) NSDictionary blendShapes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)geometry;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithAnchor:;
- (id)lookAtPoint;
- (id)blendShapes;
- (id)leftEyeTransform;
- (id)rightEyeTransform;
- (id)gazePoint;
- (id)imageVertices;
- (id)trackingData;
- (id)trackingError;
- (void)setTrackingData:;
- (BOOL)isTracked;
- (id)copyWithTrackedState:;
- (void)setIsTracked:;
- (id)initWithIdentifier:trackingData:;
- (id)initWithIdentifier:faceTrackingData:;
- (id)initWithExistingFaceAnchor:tracked:trackingError:;
- (id)faceTrackingData;
- (BOOL)isEqualToFaceAnchor:;
- (void)setTrackingError:;
+ (BOOL)supportsSecureCoding;
+ (id)blendShapeMapping;
+ (id)mirroredBlendShapeMapping;
+ (id)blendShapeToMirroredBlendShapeMapping;
@end
