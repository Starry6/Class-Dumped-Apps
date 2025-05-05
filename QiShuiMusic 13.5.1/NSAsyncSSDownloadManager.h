@interface NSAsyncSSDownloadManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)downloadManager:downloadStatesDidChange:;
- (void)dealloc;
- (void)_attemptReconnect;
- (void)downloadManagerDownloadsDidChange:;
@end
