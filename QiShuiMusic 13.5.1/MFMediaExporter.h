@interface MFMediaExporter : NSObject
+ (id)log;
+ (int)exportAsset:progressHandler:completion:;
+ (void)jpegRepresentationForImageData:inputContentType:completion:;
+ (id)conversionTimers;
+ (void)setConversionTimers:;
@end
