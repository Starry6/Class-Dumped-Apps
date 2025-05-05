@interface PTEditFloatRow : PTSRow
@property (nonatomic) Q precision;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
- (void)setPrecision:;
- (id)init;
- (unsigned long long)precision;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)maxValue;
- (double)minValue;
- (void)setMinValue:;
- (void)encodeWithCoder:;
- (void)setMaxValue:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)precision:;
- (id)between:and:;
- (id)_validatedValue:;
+ (BOOL)supportsSecureCoding;
@end
