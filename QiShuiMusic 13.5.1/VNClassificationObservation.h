@interface VNClassificationObservation : VNObservation
@property (nonatomic) NSString identifier;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)operationPointsAndReturnError:;
- (id)initWithRequestRevision:identifier:confidence:;
- (id)initWithRequestRevision:identifier:confidence:operationPointsProvider:;
- (id)initWithOriginatingRequestSpecifier:identifier:confidence:;
- (id)initWithOriginatingRequestSpecifier:identifier:confidence:operationPointsProvider:;
- (BOOL)hasPrecisionRecallCurve;
- (BOOL)hasMinimumRecall:forPrecision:;
- (BOOL)hasMinimumPrecision:forRecall:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
