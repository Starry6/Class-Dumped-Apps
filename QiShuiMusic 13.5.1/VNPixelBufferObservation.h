@interface VNPixelBufferObservation : VNObservation
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} croppedBoundingBox;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) NSString featureName;
- (id)debugQuickLookObject;
- (void)dealloc;
- (id)pixelBuffer;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)featureName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:featureName:CVPixelBuffer:;
- (id)croppedBoundingBox;
- (id)createPixelBufferInOrientation:error:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
