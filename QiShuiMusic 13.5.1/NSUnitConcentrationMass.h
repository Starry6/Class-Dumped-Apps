@interface NSUnitConcentrationMass : NSDimension
+ (id)baseUnit;
+ (BOOL)supportsRegionalPreference;
+ (id)icuType;
+ (id)gramsPerLiter;
+ (id)milligramsPerDeciliter;
+ (id)millimolesPerLiterWithGramsPerMole:;
@end
