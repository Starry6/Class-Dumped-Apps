@interface SFDeviceAssetRequestConfiguration : NSObject
@property (nonatomic) @? queryResultHandler;
@property (nonatomic) double timeout;
@property (nonatomic) @? downloadCompletionHandler;
- (void)setTimeout:;
- (void).cxx_destruct;
- (double)timeout;
- (id)description;
- (id)initWithQueryResultHandler:;
- (id)queryResultHandler;
- (id)downloadCompletionHandler;
- (void)setDownloadCompletionHandler:;
@end
