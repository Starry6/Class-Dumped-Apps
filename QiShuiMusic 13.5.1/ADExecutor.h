@interface ADExecutor : NSObject
@property (nonatomic) NSString networkVersionString;
- (id)init;
- (void).cxx_destruct;
- (id)networkVersionString;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:roi:descriptorForROI:exifOrientation:rotationPreference:inferenceDescriptor:;
- (long long)solveRotationPreference:;
- (long long)convertIntrinsicsFrom:cropBy:to:;
- (id)getIntermediates;
- (id)getIntermediateWithName:;
@end
