@interface AWESearchPrefetchImageManager : NSObject
+ (void)prefetchImagesWithViewModels:trackParams:convertHandler:;
+ (void)prefetchImagesWithURLModels:trackParams:;
+ (id)prefetchStatusWithNetworkError:from:;
@end
