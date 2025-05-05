@interface DESDediscoUploader : NSObject
@property (nonatomic) DESDediscoKey key;
- (id)key;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:recipe:;
- (unsigned int)donateResult:dediscoMetadata:recorder:;
- (BOOL)donateMetrics:dediscoMetadata:recorder:;
- (BOOL)donateCategoricalMetadata:dediscoMetadata:recorder:;
- (BOOL)donateFedStatsMetrics:dataKey:dataTypeContent:dediscoMetadata:error:recorder:;
- (BOOL)scaleData:withScalingFactor:;
+ (BOOL)uploadViaDedisco:jsonResult:recipe:bundleIdentifier:submissionCount:error:;
+ (BOOL)hasAllZeroData:;
@end
