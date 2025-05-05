@interface NSUnitConverterLinear : NSUnitConverter
@property (nonatomic) double coefficient;
@property (nonatomic) double constant;
- (double)coefficient;
- (double)baseUnitValueFromValue:;
- (double)constant;
- (id)initWithCoefficient:;
- (id)initWithCoder:;
- (id)initWithCoefficient:constant:;
- (void)encodeWithCoder:;
- (double)valueFromBaseUnitValue:;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
