@interface AWEIMGroupUpgradeSectionViewModel : NSObject
@property (nonatomic) NSString sectionIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray taskTypes;
@property (nonatomic) NSArray upgradeTaskViewModels;
@property (nonatomic) AWEIMGroupUpgradeSectionFooterViewModel sectionFooterViewModel;
- (void)setTaskTypes:;
- (id)taskTypes;
- (id)upgradeTaskViewModels;
- (void)setUpgradeTaskViewModels:;
- (void)setSectionFooterViewModel:;
- (id)sectionIdentifier;
- (void)setSectionIdentifier:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)sectionFooterViewModel;
@end
