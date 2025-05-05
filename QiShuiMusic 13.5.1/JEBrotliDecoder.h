@interface JEBrotliDecoder : NSObject
@property (nonatomic) ^{BrotliDecoderStateStruct=} decoder;
- (id)init;
- (void)dealloc;
- (long long)decompressStreamWithAvailableIn:nextIn:availableOut:nextOut:;
- (id)decoder;
@end
