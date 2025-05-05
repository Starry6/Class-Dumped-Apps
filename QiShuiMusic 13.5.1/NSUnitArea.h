@interface NSUnitArea : NSDimension
+ (id)baseUnit;
+ (BOOL)supportsRegionalPreference;
+ (id)icuType;
+ (id)_measurementWithNaturalScale:system:;
+ (id)squareMegameters;
+ (id)squareKilometers;
+ (id)squareMeters;
+ (id)squareCentimeters;
+ (id)squareMillimeters;
+ (id)squareMicrometers;
+ (id)squareNanometers;
+ (id)squareInches;
+ (id)squareFeet;
+ (id)squareYards;
+ (id)squareMiles;
+ (id)acres;
+ (id)ares;
+ (id)hectares;
@end
