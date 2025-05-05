@interface PTSliderRow : PTSRow
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) @? valueStringFormatter;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)maxValue;
- (double)minValue;
- (void)setMinValue:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setMaxValue:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)minValue:maxValue:;
- (id)valueStringFormatter:;
- (id)valueStringFormatter;
- (void)setValueStringFormatter:;
+ (BOOL)supportsSecureCoding;
@end
