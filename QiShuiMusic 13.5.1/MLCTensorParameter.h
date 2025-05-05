@interface MLCTensorParameter : NSObject
@property (nonatomic) MLCDevice device;
@property (nonatomic) MLCTensor tensor;
@property (nonatomic) BOOL isUpdatable;
- (void)setIsUpdatable:;
- (void)setDevice:;
- (BOOL)isUpdatable;
- (void).cxx_destruct;
- (id)device;
- (id)tensor;
- (id)initWithTensor:optimizerData:;
- (BOOL)allocateDataForOptimizer:device:isVector:;
+ (id)parameterWithTensor:optimizerData:;
+ (id)parameterWithTensor:;
@end
