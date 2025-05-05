@interface VNSaliencyImageObservation : VNPixelBufferObservation
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} narrowedBoundingBox;
@property (nonatomic) NSArray salientObjects;
- (id)boundingBox;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)narrowedBoundingBox;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:rawSaliencyImage:originalImageSize:salientObjectBoundingBoxes:;
- (id)createSaliencyImageAndReturnError:;
- (id)salientObjectsAndReturnError:;
- (void)_computeBoundingBoxes;
- (id)salientObjects;
+ (BOOL)supportsSecureCoding;
@end
