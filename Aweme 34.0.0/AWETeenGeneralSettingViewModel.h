@interface AWETeenGeneralSettingViewModel : NSObject
@property (nonatomic) NSArray sectionDataArray;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (id)constructSectionDataArray;
- (id)_buildSettingSectionModelWithItems:;
- (id)_buildSettingItemWithType:;
- (void)tapGeneralSettingCell;
- (void).cxx_destruct;
@end
