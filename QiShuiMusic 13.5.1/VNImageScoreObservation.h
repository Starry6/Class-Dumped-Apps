@interface VNImageScoreObservation : VNObservation
@property (nonatomic) NSNumber blurScore;
@property (nonatomic) NSNumber exposureScore;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)setExposureScore:;
- (id)exposureScore;
- (id)blurScore;
- (void)setBlurScore:;
- (id)vn_cloneObject;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
