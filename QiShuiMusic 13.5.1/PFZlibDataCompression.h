@interface PFZlibDataCompression : NSObject
- (id)init;
+ (id)compressData:options:error:;
+ (id)decompressData:options:error:;
@end
