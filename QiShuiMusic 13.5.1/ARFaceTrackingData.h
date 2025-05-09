@interface ARFaceTrackingData : NSObject
@property (nonatomic) {?=[4]} leftEyeTransform;
@property (nonatomic) {?=[4]} rightEyeTransform;
@property (nonatomic)  gazePoint;
@property (nonatomic) NSDictionary trackingData;
@property (nonatomic) NSError trackingError;
@property (nonatomic) float tongueOut;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) BOOL isValid;
@property (nonatomic) {?=[4]} transform;
@property (nonatomic) Q vertexCount;
@property (nonatomic) r^ vertices;
@property (nonatomic) r^ imageVertices;
@property (nonatomic) Q normalCount;
@property (nonatomic) r^ normals;
@property (nonatomic) Q blendShapeCoefficientsCount;
@property (nonatomic) r^f blendShapeCoefficients;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initPrivate;
- (id)identifier;
- (unsigned long long)vertexCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)transform;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)vertices;
- (id)normals;
- (id)leftEyeTransform;
- (id)rightEyeTransform;
- (id)gazePoint;
- (id)imageVertices;
- (unsigned long long)normalCount;
- (unsigned long long)blendShapeCoefficientsCount;
- (id)blendShapeCoefficients;
- (id)trackingData;
- (id)initWithTrackingData:anchorIdentifier:;
- (id)initWithTrackingData:transformToMirrored:anchorIdentifier:;
- (void)_extractMetaDataAndTransformToMirrored:;
- (id)trackingError;
- (float)tongueOut;
- (void)setLeftEyeTransform:;
- (void)setRightEyeTransform:;
- (void)setGazePoint:;
- (void)setTrackingData:;
+ (BOOL)supportsSecureCoding;
+ (id)sharedNeutralGeometry;
@end
