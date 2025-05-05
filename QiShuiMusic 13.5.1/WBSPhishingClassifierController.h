@interface WBSPhishingClassifierController : NSObject
@property (nonatomic) <WBSPhishingClassifierControllerDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)classifyURL:options:completionHandler:;
- (void)phishingAssetController:didLoadImageClassifierModel:configuration:;
- (void)phishingAssetController:didFailDownload:;
- (void)phishingAssetController:didFailCatalogDownload:;
- (void)phishingAssetController:didFailLoad:;
- (void)phishingAssetController:didFailModelInitialization:;
- (void)classifyURL:image:completionHandler:;
- (void)classifyURL:webView:completionHandler:;
- (void)takeSnapshotForWebView:completionHandler:;
- (void)setClassification:forURL:;
- (id)initWithHistory:crowdsourcedFeedbackAllowList:;
- (id)initWithAssetController:history:crowdsourcedFeedbackAllowList:;
+ (BOOL)isDisabled;
@end
