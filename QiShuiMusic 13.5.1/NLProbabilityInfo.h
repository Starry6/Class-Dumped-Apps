@interface NLProbabilityInfo : NSObject
@property (nonatomic) double probability;
@property (nonatomic) double log10Probability;
@property (nonatomic) BOOL isValid;
@property (nonatomic) Q probabilityFlags;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)probability;
- (id)initWithProbability:flags:;
- (id)initWithLog10Probability:flags:;
- (id)initWithInvalidProbability;
- (double)log10Probability;
- (unsigned long long)probabilityFlags;
+ (BOOL)supportsSecureCoding;
@end
