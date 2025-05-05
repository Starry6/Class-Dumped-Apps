@interface SNCreateFeaturePrintRequest : NSObject
@property (nonatomic) q featurePrintType;
@property (nonatomic) float overlapFactor;
@property (nonatomic) {?=qiIq} windowDuration;
@property (nonatomic) SNTimeDurationConstraint windowDurationConstraint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)windowDuration;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setWindowDuration:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)createAnalyzerWithError:;
- (id)initWithFeaturePrintType:;
- (float)overlapFactor;
- (void)setOverlapFactor:;
- (id)windowDurationConstraint;
- (long long)featurePrintType;
- (void)setFeaturePrintType:;
+ (BOOL)supportsSecureCoding;
@end
