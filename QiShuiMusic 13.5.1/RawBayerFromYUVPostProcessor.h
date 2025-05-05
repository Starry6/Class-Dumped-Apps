@interface RawBayerFromYUVPostProcessor : DefaultPostProcessor
@property (nonatomic) BOOL rawBayerMSBReplication;
- (id)processedPixelBufferFrom:metadata:error:;
- (unsigned int)processedPixelFormat;
- (id)initWithOriginalPixelFormat:rawBayerMSBReplication:;
- (BOOL)rawBayerMSBReplication;
- (void)setRawBayerMSBReplication:;
@end
