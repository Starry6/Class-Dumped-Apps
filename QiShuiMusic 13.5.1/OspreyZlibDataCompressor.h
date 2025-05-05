@interface OspreyZlibDataCompressor : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (id)compressedDataForData:error:;
@end
