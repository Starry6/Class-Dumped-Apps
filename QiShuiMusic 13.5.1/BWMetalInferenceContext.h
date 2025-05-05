@interface BWMetalInferenceContext : NSObject
@property (nonatomic) <MTLCommandQueue> commandQueue;
@property (nonatomic) <MTLDevice> device;
- (void)dealloc;
- (id)commandQueue;
- (int)prepareForInferenceWithCompletionQueue:;
- (id)device;
- (id)initWithSchedulerPriority:;
@end
