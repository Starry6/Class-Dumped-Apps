@interface FPFetchPublishingURLOperation : FPActionOperation
@property (nonatomic) @? _t_filePresenterStarted;
@property (nonatomic) @? fetchCompletionBlock;
@property (nonatomic) NSURL presentedItemURL;
@property (nonatomic) NSOperationQueue presentedItemOperationQueue;
@property (nonatomic) NSURL primaryPresentedItemURL;
@property (nonatomic) NSSet observedPresentedItemUbiquityAttributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)presentedItemURL;
- (void)setFetchCompletionBlock:;
- (void)cancel;
- (id)presentedItemOperationQueue;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:;
- (id)fetchCompletionBlock;
- (void).cxx_destruct;
- (void)presentedItemDidMoveToURL:;
- (void)finishWithResult:error:;
- (void)presentedItemDidChangeUbiquityAttributes:;
- (id)observedPresentedItemUbiquityAttributes;
- (id)initWithItem:;
- (void)actionMain;
- (void)_setupFilePresenterAndWaitForUpload;
- (void)_tryFetchingSharingURL;
- (id)_t_filePresenterStarted;
- (void)set_t_filePresenterStarted:;
@end
