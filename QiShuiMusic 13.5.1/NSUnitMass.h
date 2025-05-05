@interface NSUnitMass : NSDimension
- (id)_intents_stringRepresentation;
+ (id)baseUnit;
+ (BOOL)supportsRegionalPreference;
+ (id)icuType;
+ (id)_measurementWithNaturalScale:system:;
+ (id)kilograms;
+ (id)grams;
+ (id)decigrams;
+ (id)centigrams;
+ (id)milligrams;
+ (id)micrograms;
+ (id)nanograms;
+ (id)picograms;
+ (id)ounces;
+ (id)poundsMass;
+ (id)stones;
+ (id)metricTons;
+ (id)shortTons;
+ (id)carats;
+ (id)ouncesTroy;
+ (id)slugs;
@end
