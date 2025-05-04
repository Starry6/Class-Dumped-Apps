@interface AWESECSampling : NSObject
+ (BOOL)hitSamplingWithRate:;
+ (BOOL)hitSamplingUsingTime:;
+ (BOOL)hitSamplingUsingRandom:;
+ (BOOL)hitSamplingWithRate:usingMethod:;
@end
