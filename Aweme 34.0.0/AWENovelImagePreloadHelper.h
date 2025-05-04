@interface AWENovelImagePreloadHelper : NSObject
- (id)strArrayOfReaderRetainAlertImages;
- (id)urlArrayWithImageArray:;
- (void)prefetchImagesWithoutLoadWhenBookInfoReady;
+ (id)sharedInstance;
@end
