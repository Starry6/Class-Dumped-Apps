@interface ADNormals : NSObject
+ (long long)normalsFromDepth:focalLength:principalPoint:normalsOutput:withHelperBuffer:;
+ (long long)normalsFromDepth:focalLength:principalPoint:normalsOutput:;
@end
