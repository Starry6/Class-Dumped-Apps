@interface GradientBuffer : NSObject
@property (nonatomic) Q size;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (id).cxx_construct;
- (unsigned long long)size;
- (id)initWithTensorBefore:tensorAfter:withScale:shouldSparsify:error:;
- (void)accumulateDifferenceBetweenTensorBefore:andTensorAfter:withScale:error:;
- (void)applyToTensor:scale:error:;
- (float)l2norm;
- (void)multiply:;
@end
