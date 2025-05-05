@interface NSUnitEnergy : NSDimension
- (id)_intents_stringRepresentation;
+ (id)baseUnit;
+ (BOOL)supportsRegionalPreference;
+ (id)icuType;
+ (id)_measurementWithNaturalScale:system:;
+ (id)foodcalories;
+ (id)kilocalories;
+ (id)kilojoules;
+ (id)joules;
+ (id)calories;
+ (id)kilowattHours;
@end
