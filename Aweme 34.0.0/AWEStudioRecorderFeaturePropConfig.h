@interface AWEStudioRecorderFeaturePropConfig : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) BOOL useCustomPropCategory;
@property (nonatomic) NSArray customCategoryArray;
@property (nonatomic) NSDictionary customCategoryRequestParameters;
@property (nonatomic) BOOL showStickerPanelAtLaunch;
@property (nonatomic) UIColor albumNextButtonBackgroundColor;
- (BOOL)shouldUseCustomPropCategory;
- (void)setUseCustomPropCategory:;
- (id)customCategoryArray;
- (void)setCustomCategoryArray:;
- (id)customCategoryRequestParameters;
- (void)setCustomCategoryRequestParameters:;
- (BOOL)showStickerPanelAtLaunch;
- (void)setShowStickerPanelAtLaunch:;
- (id)albumNextButtonBackgroundColor;
- (void)setAlbumNextButtonBackgroundColor:;
- (void).cxx_destruct;
@end
