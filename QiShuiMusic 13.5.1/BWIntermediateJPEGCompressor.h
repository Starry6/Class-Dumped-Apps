@interface BWIntermediateJPEGCompressor : NSObject
- (void)dealloc;
- (id)newJPEGSampleBufferFromUncompressedSampleBuffer:;
- (void)flush;
- (id)initWithCompressionQuality:compressionRate:jpegSurfacePoolLowWaterBufferCount:jpegSurfacePoolHighWaterBufferCount:compressedBufferPoolAllocationTimeoutMS:name:;
@end
