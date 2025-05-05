@interface BWStillImageNodeConfiguration : NSObject
@property (nonatomic) <MTLCommandQueue> metalCommandQueue;
@property (nonatomic) NSInteger depthDataType;
@property (nonatomic) NSInteger pearlModuleType;
@property (nonatomic) BWInferenceScheduler inferenceScheduler;
@property (nonatomic) NSInteger maxLossyCompressionLevel;
- (int)maxLossyCompressionLevel;
- (void)setMaxLossyCompressionLevel:;
- (void)dealloc;
- (void)setMetalCommandQueue:;
- (id)metalCommandQueue;
- (int)depthDataType;
- (id)inferenceScheduler;
- (void)setInferenceScheduler:;
- (void)setDepthDataType:;
- (int)pearlModuleType;
- (void)setPearlModuleType:;
@end
