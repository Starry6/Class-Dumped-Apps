@interface UISTransform3DGrader : NSObject
- (id)init;
- (void)allowSkews:count:lowerMultiplier:lowerConstant:upperMultiplier:upperConstant:;
- (void)allowScales:count:;
- (void).cxx_destruct;
- (void)allowRotations:count:lowerMultiplier:lowerConstant:upperMultiplier:upperConstant:;
- (void)allowRotations:count:;
- (void)allowSkews:count:;
- (unsigned long long)gradeTransform3D:;
- (void)allowScales:count:lowerMultiplier:lowerConstant:upperMultiplier:upperConstant:;
- (id).cxx_construct;
@end
