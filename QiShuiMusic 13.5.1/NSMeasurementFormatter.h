@interface NSMeasurementFormatter : NSFormatter
@property (nonatomic) Q unitOptions;
@property (nonatomic) q unitStyle;
@property (nonatomic) NSLocale locale;
@property (nonatomic) NSNumberFormatter numberFormatter;
- (long long)unitStyle;
- (void)setUnitOptions:;
- (id)stringFromMeasurement:;
- (id)numberFormatter;
- (id)stringForObjectValue:;
- (void)setUnitStyle:;
- (id)measurementFromString:;
- (void)setLocale:;
- (id)init;
- (void)dealloc;
- (id)stringFromUnit:;
- (id)locale;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setNumberFormatter:;
- (unsigned long long)unitOptions;
+ (BOOL)supportsSecureCoding;
@end
