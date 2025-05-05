@interface SKInstallSheetStatusUpdateRequest : SKRequest
@property (nonatomic) NSString bundleId;
@property (nonatomic) @? completionHandler;
- (id)bundleId;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)_start;
- (id)completionHandler;
- (id)initWithAppBundleId:isInstallSheetOpen:completionHandler:;
@end
