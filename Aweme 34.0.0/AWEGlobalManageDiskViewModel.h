@interface AWEGlobalManageDiskViewModel : AWESettingBaseViewModel
@property (nonatomic) AWESettingItemModel tempFileSettingItem;
@property (nonatomic) AWESettingItemModel resourceFileSettingItem;
@property (nonatomic) AWESettingItemModel draftFileSettingItem;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (void)updateDraftCacheDisplay;
- (id)tempFileSettingItem;
- (void)updateSizeOfTempFileWithCompletion:;
- (id)resourceFileSettingItem;
- (void)updateSizeOfResourceFileWithCompletion:;
- (id)draftFileSettingItem;
- (void)updateSizeOfDraftFileWithCompletion:;
- (void)setTempFileSettingItem:;
- (void)setResourceFileSettingItem:;
- (void)setDraftFileSettingItem:;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
