@interface PHMediaFormatConversionAssetBundleSource : PHMediaFormatConversionSource
- (id)fileType;
+ (Class)requestClass;
+ (id)sourceForFileURL:;
@end
