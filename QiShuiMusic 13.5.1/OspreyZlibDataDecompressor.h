@interface OspreyZlibDataDecompressor : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (id)decompressedDataForData:error:;
@end
