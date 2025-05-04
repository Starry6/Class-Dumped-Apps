@interface AWEIMFansGroupLevelViewModel : NSObject
@property (nonatomic) AWEIMGroupEntrySettingMenuModel settingMenuModel;
@property (nonatomic) NSMutableDictionary groupEntryLimitDict;
@property (nonatomic) AWEIMGroupEntrySettingMenuModel selectedFansClubSettingMenuModel;
- (id)groupEntryLimitDict;
- (void)invokeCompletionBlock:;
- (id)titleOfNavigationBar;
- (id)titleOfFansClubTypeCellWithIndex:;
- (BOOL)isSelectedFansClubTypeCellWithIndex:;
- (id)titleOfFansLevelCell;
- (id)detailTitleOfFansLevelCell;
- (void)selectFansClubTypeWithIndex:;
- (BOOL)isDialogAction;
- (id)selectedFansClubSettingMenuModel;
- (id)selectedLevelValue;
- (void)setSelectedLevelValue:;
- (double)heightOfRuleDescriptionTextWithWidth:font:;
- (id)titleOfHeaderInSection:;
- (id)ruleDescriptionText;
- (id)settingMenuModel;
- (void)setSelectedFansClubSettingMenuModel:;
- (id)initWithSettingMenuModel:groupEntryLimitDict:;
- (void)setSettingMenuModel:;
- (void)setGroupEntryLimitDict:;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:;
- (void).cxx_destruct;
@end
