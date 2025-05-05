@interface QLServiceViewController : UIViewController
@property (nonatomic) NSUUID uuid;
@property (nonatomic) UIViewController mainViewController;
- (id)init;
- (id)uuid;
- (id)mainViewController;
- (void).cxx_destruct;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:;
- (void)invalidateService;
- (void)configureAsAccessoryViewContainerForPreviewCollection:;
- (void)_registerServiceViewController;
+ (id)_serviceViewControllers;
+ (id)_getServiceWithUUID:;
@end
