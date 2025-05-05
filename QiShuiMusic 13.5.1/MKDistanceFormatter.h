@interface MKDistanceFormatter : NSFormatter
@property (nonatomic) NSLocale locale;
@property (nonatomic) Q units;
@property (nonatomic) Q unitStyle;
- (unsigned long long)unitStyle;
- (id)stringForObjectValue:;
- (void)setUnitStyle:;
- (void)setLocale:;
- (id)init;
- (BOOL)getObjectValue:forString:errorDescription:;
- (void)setUnits:;
- (id)locale;
- (id)initWithCoder:;
- (unsigned long long)units;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isPartialStringValid:proposedSelectedRange:originalString:originalSelectedRange:errorDescription:;
- (id)copyWithZone:;
- (BOOL)_useMetric;
- (id)stringFromDistance:;
- (double)distanceFromString:;
@end
