@interface AWEIMGroupEntrySettingViewModel : NSObject
@property (nonatomic) NSArray entrySettingModels;
@property (nonatomic) NSArray entryLimitModels;
@property (nonatomic) q sectionsCount;
- (void)configWithGroupEntrySettingMenuModel:nonLimitContext:;
- (void)configWithGroupEntrySettingMenuModel:groupManagementInfo:conversation:;
- (id)entrySettingModels;
- (long long)sectionModelTypeAtIndex:;
- (void)setEntrySettingModels:;
- (void)setEntryLimitModels:;
- (id)entryLimitModels;
- (void)setSectionsCount:;
- (long long)numberOfRowsInSection:;
- (void).cxx_destruct;
- (long long)sectionsCount;
- (id)modelAtIndexPath:;
@end
