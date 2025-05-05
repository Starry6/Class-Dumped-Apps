@interface AVAggregateAssetDownloadTask : NSURLSessionTask
@property (nonatomic) AVURLAsset URLAsset;
@property (nonatomic) NSURLRequest originalRequest;
@property (nonatomic) NSURLRequest currentRequest;
@property (nonatomic) NSURLResponse response;
- (id)currentRequest;
- (id)response;
- (id)URLAsset;
- (id)originalRequest;
@end
