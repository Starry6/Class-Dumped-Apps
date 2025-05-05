@interface CIDetector : NSObject
- (id)init;
- (id)featuresInImage:options:;
- (id)featuresInImage:;
+ (id)detectorOfType:context:options:;
@end
