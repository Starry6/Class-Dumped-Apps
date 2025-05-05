@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask
@property (nonatomic) Q AVAssetDownloadToken;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSURL destinationURL;
- (id)destinationURL;
- (unsigned long long)AVAssetDownloadToken;
- (id)URL;
@end
