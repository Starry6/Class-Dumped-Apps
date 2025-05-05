@interface PSLargeTextController : PSListController
@property (nonatomic) BOOL showsExtendedRangeSwitch;
- (id)specifiers;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)sizeCategoryDidChange:;
- (void)viewDidLayoutSubviews;
- (BOOL)showsExtendedRangeSwitch;
- (void)setShowsExtendedRangeSwitch:;
- (void)setUsesExtendedRange:forSpecifier:;
- (id)usesExtendedRangeForSpecifier:;
@end
