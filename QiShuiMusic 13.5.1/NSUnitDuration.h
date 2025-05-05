@interface NSUnitDuration : NSDimension
+ (id)baseUnit;
+ (id)seconds;
+ (id)icuType;
+ (id)hours;
+ (id)minutes;
+ (id)_measurementWithNaturalScale:system:;
+ (id)milliseconds;
+ (id)microseconds;
+ (id)nanoseconds;
+ (id)picoseconds;
@end
