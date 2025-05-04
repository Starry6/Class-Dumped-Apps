@interface AWEFansListCategorySectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) NSArray categoryTypes;
@property (nonatomic) BOOL forceHidenFollowerCount;
@property (nonatomic) q selectedCategory;
- (void)setupViewModel;
- (long long)selectedCategory;
- (void)setSelectedCategory:;
- (void)loadMoreSectionData;
- (BOOL)forceHidenFollowerCount;
- (void)setForceHidenFollowerCount:;
- (BOOL)onlyShowCategoryAll;
- (void).cxx_destruct;
- (id)categoryTypes;
- (void)setCategoryTypes:;
@end
