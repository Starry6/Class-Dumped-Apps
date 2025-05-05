@interface L008ToNonPlanarPostProcessor : DefaultPostProcessor
- (void)dealloc;
- (id)processedPixelBufferFrom:metadata:error:;
- (unsigned int)processedPixelFormat;
- (unsigned long long)adjustedWidthForWidth:;
@end
