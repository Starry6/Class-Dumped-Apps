@interface PHImportAssetFilePresenter : NSObject
@property (nonatomic) NSURL presentedItemURL;
@property (nonatomic) NSOperationQueue presentedItemOperationQueue;
@property (nonatomic) NSURL primaryPresentedItemURL;
@property (nonatomic) NSSet observedPresentedItemUbiquityAttributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)presentedItemURL;
- (id)presentedItemOperationQueue;
- (void).cxx_destruct;
- (id)primaryPresentedItemURL;
- (id)initWithPrimaryURL:presentedURL:;
@end
