@interface VNCoreMLFeatureValueObservation : VNObservation
@property (nonatomic) MLFeatureValue featureValue;
@property (nonatomic) NSString featureName;
- (id)initWithCoder:;
- (id)featureName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)featureValue;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:featureName:featureValue:;
+ (BOOL)supportsSecureCoding;
@end
