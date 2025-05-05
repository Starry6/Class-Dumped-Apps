@interface PPScoredLabeledValue : NSObject
@property (nonatomic) PPLabeledValue labeledValue;
@property (nonatomic) double score;
@property (nonatomic) C flags;
- (BOOL)isEqualToScoredLabeledValue:;
- (double)score;
- (id)labeledValue;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)reverseCompare:;
- (id)initWithLabeledValue:score:flags:;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (unsigned char)flags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)scoredLabeledValueWithLabeledValue:score:flags:;
@end
