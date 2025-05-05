@interface ARBufferPopulationMonitor : NSObject
@property (nonatomic) Q count;
@property (nonatomic) <ARBufferPopulationMonitorDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDelegate:;
- (unsigned long long)count;
- (unsigned long long)countWithLabel:;
- (void)trackDataBuffer:;
- (void)trackDataBuffer:withLabel:timestamp:signpostType:;
- (void)trackPixelBuffer:;
- (void)trackPixelBuffer:withLabel:timestamp:signpostType:;
- (void)trackSurface:;
- (void)emitStartSignpost:surfaceID:count:timestamp:;
- (void)emitEndSignpost:surfaceID:count:timestamp:;
- (void)trackSurface:withLabel:timestamp:signpostType:;
- (void)updateBufferPopulationRegistryWithReleasedSurfaceID:;
@end
