@interface AWEStudioAwemeResourceDownloader : NSObject
+ (void)getResourcesFromAweme:progress:completion:;
+ (void)getNormalResourcesFromAweme:progress:completion:;
+ (void)fetchCoversWithAweme:completion:;
+ (void)fetchMultiResourcesFromConfig:progress:completion:;
+ (void)getImageAlbumResourcesFromAweme:progress:completion:;
@end
