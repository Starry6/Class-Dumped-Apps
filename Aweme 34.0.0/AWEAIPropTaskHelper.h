@interface AWEAIPropTaskHelper : NSObject
+ (Class)taskClassWithType:;
+ (void)present:animated:;
+ (id)convertToVideoWithVideoPath:;
+ (void)downloadCoverImageAndVideoData:effectId:imageURLs:videoURLs:multiImageURLs:rawImages:liveImageURLs:liveVideoURLs:completion:;
+ (id)convertToFileURLWithLocalPath:;
+ (void)enterEditWithAssets:publishModel:completion:;
+ (void)enterEditWithAssets:publishModel:isAsync:withMode:completion:;
+ (void)handleAIPropCompletion:repoContainer:error:;
+ (id)configClipInputData:withRepoContainer:;
+ (void)downloadMultiOriginImageWith:identifier:completion:;
+ (void)downloadRawImageWith:identifier:completion:;
+ (void)downloadAfterProcessEffect:completion:;
+ (void)convertToVideoWithVideoPath:publishModel:completion:;
+ (BOOL)isInFeedVC;
@end
