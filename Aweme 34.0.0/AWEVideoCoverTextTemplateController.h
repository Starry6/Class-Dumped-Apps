@interface AWEVideoCoverTextTemplateController : AWETextTemplateController
@property (nonatomic) BOOL isHistory;
@property (nonatomic) UILabel historyEmptyLabel;
@property (nonatomic) NSDictionary userSetting;
@property (nonatomic) @? userSettingDidFinishFetch;
- (void)cancelSelect;
- (id)initWithPanelName:UIConfig:currentSticker:publishmodel:scene:;
- (BOOL)isHistory;
- (void)setIsHistory:;
- (id)userSetting;
- (void)setUserSetting:;
- (void)setStickDownloadInfo:;
- (id)createPanelViewWith:publishmodel:;
- (id)createModelWithPanelName:currentSticker:currentChildSticker:;
- (BOOL)disableDeSelect;
- (id)userSettingDidFinishFetch;
- (void)setUserSettingDidFinishFetch:;
- (void)pickerViewDidSelectSticker:category:isAutoApply:;
- (void)stickerPickerModelDidFinishLoadCategories:;
- (void)selectWithEffectModel:;
- (id)historyEmptyLabel;
- (void)setHistoryEmptyLabel:;
- (void).cxx_destruct;
@end
