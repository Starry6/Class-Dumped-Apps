@interface AWEIMPickerService : HTSService
@property (nonatomic) AWEIMComponentViewController pickerVC;
@property (nonatomic) AWEIMPickerConfiguration configuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)jumpToPreviewPageWithAnimated:;
- (id)getSelectedLocalAssets;
- (id)pickerVC;
- (id)previewContainerWithPickerConfiguration:preViewConfiguration:;
- (id)pickerWithConfiguration:;
- (id)getSelectedAssetIdentifiers;
- (void)finishSelecting;
- (void)selectCurrentShowingAssetInPreviewVC;
- (void)setOriginSelect:;
- (void)jumpToEditPage;
- (void)newJumpToEditPageWithScene:context:;
- (void)setPickerVC:;
- (void).cxx_destruct;
- (id)configuration;
@end
