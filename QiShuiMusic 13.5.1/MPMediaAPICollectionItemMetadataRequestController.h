@interface MPMediaAPICollectionItemMetadataRequestController : NSObject
- (void)cancelRequest:;
- (void).cxx_destruct;
- (id)_init;
- (void)enqueueRequest:withBatchProgressHandler:;
+ (id)sharedInstance;
@end
