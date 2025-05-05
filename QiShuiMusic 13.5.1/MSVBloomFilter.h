@interface MSVBloomFilter : NSObject
@property (nonatomic) q capacity;
@property (nonatomic) float falsePositiveTolerance;
@property (nonatomic) float falsePositiveProbability;
@property (nonatomic) q estimatedCount;
- (long long)capacity;
- (void)dealloc;
- (float)falsePositiveTolerance;
- (BOOL)containsObject:;
- (float)falsePositiveProbability;
- (id)initWithCoder:;
- (void)addObject:;
- (long long)estimatedCount;
- (void)encodeWithCoder:;
- (id)initWithCapacity:falsePositiveTolerance:;
- (unsigned long long)_murmur2HashObject:;
- (id)initWithCapacity:falsePositiveTolerance:murmurSeed:;
- (id)_vectorIndexSetForObject:;
- (id)description;
- (unsigned long long)_fnvHashObject:;
+ (BOOL)supportsSecureCoding;
@end
