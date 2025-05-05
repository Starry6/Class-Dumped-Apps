@interface WBSPhishingAssetController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <WBSPhishingAssetControllerDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)didDownloadPlistForRemotePlistController:;
- (void)mobileAssetController:didDownload:;
- (void)mobileAssetController:didBecomeAvailable:;
- (void)mobileAssetController:didFailDownload:;
- (void)mobileAssetController:didFailCatalogDownload:;
- (void)mobileAssetController:didFailRetrieve:;
- (void)mobileAssetController:willPerformQuery:;
- (id)initWithMobileAssetController:canUpdateConfiguration:;
- (BOOL)_sendAssetToDelegateIfPossible;
- (BOOL)_sendAssetToDelegateIfPossible:;
- (void)_configurationWasUpdated:;
- (id)_createConfigurationControllerWithDefaultConfigurationURL:updateConfiguration:defaultsKey:;
+ (id)mobileAssetType;
@end
