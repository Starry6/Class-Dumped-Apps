@interface ZstdCompressor : NSObject
@property (nonatomic) NSInteger compressionLevel;
- (id)compressDataWithData:usingDict:error:;
- (void)setDictioanry:;
- (id)init;
- (void)setCompressionLevel:;
- (int)compressionLevel;
+ (id)compressDataWithData:compressionLevel:dictionary:;
+ (id)compressedDataWithBytes:length:compressionLevel:dictionary:;
+ (long long)defaultCompressionLevel;
@end
