@interface SNClassifySoundRequest : NSObject
@property (nonatomic) double overlapFactor;
@property (nonatomic) {?=qiIq} windowDuration;
@property (nonatomic) SNTimeDurationConstraint windowDurationConstraint;
@property (nonatomic) NSArray knownClassifications;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)windowDuration;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithMLModel:error:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setWindowDuration:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithClassifierIdentifier:error:;
- (id)createAnalyzerWithError:;
- (double)overlapFactor;
- (void)setOverlapFactor:;
- (id)windowDurationConstraint;
- (id)knownClassifications;
+ (BOOL)supportsSecureCoding;
@end
