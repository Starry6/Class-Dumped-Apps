@interface AWENewVideoCoverTextTemplateModel : AWETextTemplateModel
@property (nonatomic) BOOL isHistory;
@property (nonatomic) NSDictionary userSetting;
@property (nonatomic) @? userSettingDidFinishFetch;
- (BOOL)isHistory;
- (void)setIsHistory:;
- (id)userSetting;
- (void)setUserSetting:;
- (id)userSettingDidFinishFetch;
- (void)fetchStickerCategoryListInternal;
- (BOOL)supportMultiCategories;
- (void)setUserSettingDidFinishFetch:;
- (void).cxx_destruct;
@end
