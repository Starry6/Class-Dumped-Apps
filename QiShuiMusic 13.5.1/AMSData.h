@interface AMSData : NSObject
+ (id)compressedGzippedDataWithData:;
+ (id)dataWithObject:encoding:error:;
+ (id)objectWithData:response:error:;
+ (long long)_dataEncodingFromResponse:;
+ (long long)dataEncodingFromContentType:;
+ (id)decompressedDataWithGzippedData:;
+ (id)objectWithData:encoding:error:;
@end
