@interface PSLargeTextSliderListController : PSListController
@property (nonatomic) NSArray contentSizeCategories;
@property (nonatomic) q selectedCategoryIndex;
@property (nonatomic) BOOL showsExtendedRangeSwitch;
@property (nonatomic) BOOL usesExtendedRange;
@property (nonatomic) BOOL showsLargerSizesHelpText;
- (id)specifiers;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)loadView;
- (void)setDynamicTypeValue:forSpecifier:;
- (id)getDynamicTypeValueForSpecifier:;
- (id)initUsingExtendedRange:;
- (void)setSelectedCategoryIndex:;
- (void)setUsesExtendedRange:;
- (id)contentSizeCategories;
- (void)setContentSizeCategories:;
- (long long)selectedCategoryIndex;
- (BOOL)showsExtendedRangeSwitch;
- (void)setShowsExtendedRangeSwitch:;
- (BOOL)usesExtendedRange;
- (BOOL)showsLargerSizesHelpText;
- (void)setShowsLargerSizesHelpText:;
@end
