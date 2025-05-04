@interface AWEStudioComposerPublishPrivacySettingFeature : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) BOOL needRememberLastChoice;
@property (nonatomic) BOOL needShowCount;
@property (nonatomic) # privacyTableViewCellClass;
- (BOOL)needRememberLastChoice;
- (void)setNeedRememberLastChoice:;
- (BOOL)needShowCount;
- (void)setNeedShowCount:;
- (Class)privacyTableViewCellClass;
- (void)setPrivacyTableViewCellClass:;
- (void).cxx_destruct;
@end
