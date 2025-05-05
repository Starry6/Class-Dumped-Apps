@interface PFUbiquityFilePresenter : NSObject
@property (nonatomic) NSURL presentedItemURL;
@property (nonatomic) NSOperationQueue presentedItemOperationQueue;
@property (nonatomic) NSURL primaryPresentedItemURL;
@property (nonatomic) NSSet observedPresentedItemUbiquityAttributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)presentedItemURL;
- (id)init;
- (void)dealloc;
- (id)presentedItemOperationQueue;
- (void)relinquishPresentedItemToReader:;
- (void)relinquishPresentedItemToWriter:;
- (id)description;
- (void)presentedSubitemDidChangeAtURL:;
- (void)logWasExported:;
- (void)logWasImported:;
- (void)logImportWasCancelled:;
- (void)logsWereScheduled:;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:;
- (void)printStatus:;
- (id)initWithUbiquityRootLocation:localPeerID:storeName:processingQueue:;
- (void)exporterDidMoveLog:;
@end
