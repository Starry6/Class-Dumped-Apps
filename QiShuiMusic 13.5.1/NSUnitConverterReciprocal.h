@interface NSUnitConverterReciprocal : NSUnitConverter
@property (nonatomic) double reciprocalValue;
- (double)baseUnitValueFromValue:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)valueFromBaseUnitValue:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithReciprocalValue:;
- (double)reciprocalValue;
+ (BOOL)supportsSecureCoding;
@end
