@interface PUPickerExtensionVendorContext : PUPickerExtensionContext
@property (nonatomic) <_PUPickerExtensionContextVendorInterface> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_startActivityIndicatorsForAssetsWithIdentifiers:;
- (void)_stopActivityIndicatorsForAssetsWithIdentifiers:;
- (void)_updateConfiguration:completionHandler:;
- (void)_deselectAssetsWithIdentifiers:;
- (void)_moveAssetWithIdentifier:afterIdentifier:;
- (void)_searchWithString:;
@end
