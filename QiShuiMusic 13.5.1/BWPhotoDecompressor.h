@interface BWPhotoDecompressor : NSObject
@property (nonatomic) BWPixelBufferPool outputPixelBufferPool;
- (void)dealloc;
- (void)flush;
- (id)outputPixelBufferPool;
- (id)initWithPoolSize:outputPixelFormat:outputLargestDimension:;
- (id)initWithOutputPixelBufferPool:;
- (id)newUncompressedPixelBufferFromSampleBuffer:;
- (id)newUncompressedSampleBufferFromSampleBuffer:;
@end
