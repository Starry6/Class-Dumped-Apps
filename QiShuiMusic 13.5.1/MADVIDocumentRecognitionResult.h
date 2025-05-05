@interface MADVIDocumentRecognitionResult : MADResult
@property (nonatomic) Q executionNanoseconds;
@property (nonatomic) double executionTimeInterval;
@property (nonatomic) NSArray observations;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)observations;
- (unsigned long long)executionNanoseconds;
- (id)initWithObservations:;
- (double)executionTimeInterval;
+ (BOOL)supportsSecureCoding;
@end
