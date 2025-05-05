@interface MSVRandomDistribution : NSObject
@property (nonatomic) q lowestValue;
@property (nonatomic) q highestValue;
@property (nonatomic) Q numberOfPossibleOutcomes;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)nextIntWithUpperBound:;
- (id)initWithRandomSource:lowestValue:highestValue:;
- (long long)lowestValue;
- (long long)highestValue;
- (unsigned long long)numberOfPossibleOutcomes;
+ (BOOL)supportsSecureCoding;
@end
