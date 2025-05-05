@interface NSUnitFormatter : NSFormatter
@property (nonatomic) NSNumberFormatter numberFormatter;
@property (nonatomic) NSLocale locale;
@property (nonatomic) Q unitOptions;
@property (nonatomic) q unitStyle;
- (long long)unitStyle;
- (void)setUnitOptions:;
- (id)numberFormatter;
- (id)stringForObjectValue:;
- (void)setUnitStyle:;
- (void)setLocale:;
- (id)init;
- (void)checkIfModified;
- (void)dealloc;
- (id)stringForValue1:unit1:value2:unit2:;
- (id)stringFromUnit:;
- (id)locale;
- (id)initWithCoder:;
- (id)unitStringFromValue:unit:;
- (void)encodeWithCoder:;
- (int)_determineUnitsToFormat:fromMeasurement:;
- (id)stringForValue:unit:;
- (void)setNumberFormatter:;
- (id)copyWithZone:;
- (unsigned long long)unitOptions;
+ (BOOL)supportsSecureCoding;
@end
