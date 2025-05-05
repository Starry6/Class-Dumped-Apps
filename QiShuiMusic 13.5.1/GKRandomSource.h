@interface GKRandomSource : NSObject
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (unsigned long long)nextIntWithUpperBound:;
- (long long)nextInt;
- (float)nextUniform;
- (BOOL)nextBool;
- (id)arrayByShufflingObjectsInArray:;
+ (BOOL)supportsSecureCoding;
+ (id)systemRandom;
+ (id)sharedRandom;
@end
