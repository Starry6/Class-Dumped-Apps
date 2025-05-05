@interface PFUbiquityMetadataFactoryFilePresenter : NSObject
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
- (void)accommodatePresentedItemDeletionWithCompletionHandler:;
- (void)relinquishPresentedItemToReader:;
- (void)relinquishPresentedItemToWriter:;
- (void)savePresentedItemChangesWithCompletionHandler:;
- (id)initWithMetadataStoreFileLocation:;
@end
