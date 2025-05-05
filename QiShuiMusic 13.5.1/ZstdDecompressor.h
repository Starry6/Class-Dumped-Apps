@interface ZstdDecompressor : NSObject
+ (id)decompressedDataWithBytes:length:;
+ (id)decompressedDataWithBytes:length:dictBytes:dictLength:;
+ (id)decompressedDataWithData:;
+ (id)decompressedDataWithData:dict:;
+ (BOOL)decompressedDataWithData:fileName:;
+ (long long)defaultCompressionLevel;
@end
