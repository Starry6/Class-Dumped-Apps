@interface BWRenderListProcessor : NSObject
@property (nonatomic) BWPixelBufferPool renderingPool;
@property (nonatomic) BOOL alwaysEmitsOriginalResult;
- (void)dealloc;
- (void)adjustMetadataOfSampleBuffer:usingRenderList:;
- (id)initWithRenderingPool:;
- (void)processRenderList:withParameters:inputPixelBuffer:inputSampleBuffer:resultHandler:;
- (id)renderingPool;
- (void)setAlwaysEmitsOriginalResult:;
- (void)processRenderList:inputPixelBuffer:inputSampleBuffer:resultHandler:;
- (BOOL)alwaysEmitsOriginalResult;
- (void)waitForAllProcessingToComplete;
@end
