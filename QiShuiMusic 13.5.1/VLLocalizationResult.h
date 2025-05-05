@interface VLLocalizationResult : NSObject
@property (nonatomic) Q timestamp;
@property (nonatomic) double inputTimestamp;
@property (nonatomic) {?=d} location;
@property (nonatomic) {?=[4]} transform;
@property (nonatomic) float confidence;
@property (nonatomic) {?=[6[6f]]} covariance;
@property (nonatomic) VLLocalizationDebugInfo debugInfo;
- (float)confidence;
- (id)init;
- (id)debugInfo;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)location;
- (void)encodeWithCoder:;
- (id)transform;
- (void).cxx_destruct;
- (unsigned long long)timestamp;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)covariance;
- (double)inputTimestamp;
- (id)initWithTimestamp:pose:debugInfo:;
+ (BOOL)supportsSecureCoding;
@end
