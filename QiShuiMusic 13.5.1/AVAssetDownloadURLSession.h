@interface AVAssetDownloadURLSession : NSURLSession
- (id)assetDownloadTaskWithURLAsset:destinationURL:options:;
- (id)assetDownloadTaskWithURLAsset:assetTitle:assetArtworkData:options:;
- (id)aggregateAssetDownloadTaskWithURLAsset:mediaSelections:assetTitle:assetArtworkData:options:;
- (id)assetDownloadTaskWithConfiguration:;
+ (id)sessionWithConfiguration:assetDownloadDelegate:delegateQueue:;
@end
