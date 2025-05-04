@interface AWEStudioRecorderFeatureAdvancedSettingsConfig : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) AWEStudioFeatureRecordDurationItem recordDurationItem;
@property (nonatomic) BOOL disableFrameRatioItem;
@property (nonatomic) BOOL disableHDPhotoItem;
- (id)recordDurationItem;
- (void)setRecordDurationItem:;
- (BOOL)disableFrameRatioItem;
- (void)setDisableFrameRatioItem:;
- (BOOL)disableHDPhotoItem;
- (void)setDisableHDPhotoItem:;
- (void).cxx_destruct;
@end
