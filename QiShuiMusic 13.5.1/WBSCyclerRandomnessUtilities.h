@interface WBSCyclerRandomnessUtilities : NSObject
+ (unsigned long long)seed;
+ (void)setSeed:;
+ (id)randomString;
+ (void)reseed;
+ (unsigned long long)randomIntegerWithUpperBound:;
+ (id)randomURL;
+ (id)randomElementOfArray:;
+ (id)randomElementOfArray:relativeProbabilities:;
+ (id)_randomStringWithCharactersFromString:;
@end
