@interface MADVIMachineReadableCodeDetectionResult : MADResult
@property (nonatomic) Q executionNanoseconds;
@property (nonatomic) double executionTimeInterval;
@property (nonatomic) NSArray resultItems;
@property (nonatomic) NSArray observations;
- (id)initWithCoder:;
- (id)resultItems;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)observations;
- (unsigned long long)executionNanoseconds;
- (id)initWithObservations:;
- (double)executionTimeInterval;
+ (BOOL)supportsSecureCoding;
@end
