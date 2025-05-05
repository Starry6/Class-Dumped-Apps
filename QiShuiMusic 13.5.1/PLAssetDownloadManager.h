@interface PLAssetDownloadManager : NSObject
@property (nonatomic) <PLAssetDownloadManagerDelegate> delegate;
- (void)cancelRequest:;
- (id)init;
- (void)setDelegate:;
- (void)_onQueueAsync:;
- (id)delegate;
- (void).cxx_destruct;
- (int)requestRequiredResourcesForManagedAssetObjectUUID:library:completionHandler:;
+ (id)defaultManager;
@end
