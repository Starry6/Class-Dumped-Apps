@interface NSUnitTemperature : NSDimension
- (id)_intents_stringRepresentation;
+ (id)baseUnit;
+ (BOOL)supportsRegionalPreference;
+ (id)fahrenheit;
+ (id)celsius;
+ (id)icuType;
+ (id)kelvin;
@end
