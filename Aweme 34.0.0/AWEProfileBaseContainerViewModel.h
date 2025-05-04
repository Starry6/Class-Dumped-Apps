@interface AWEProfileBaseContainerViewModel : AWEBaseListViewModel
@property (nonatomic) NSArray currentTabItemArray;
@property (nonatomic) AWEProfileBaseHeaderSectionViewModel headerSectionViewModel;
@property (nonatomic) AWETabContainerSectionViewModel tabSectionViewModel;
- (void)scrollToIndex:;
- (id)headerSectionViewModel;
- (void)setTabSectionViewModel:;
- (id)tabSectionViewModel;
- (void)setHeaderSectionViewModel:;
- (void)updateByContext:;
- (id)currentTabItemArray;
- (BOOL)isSame:to:;
- (void)reloadSectionsWithContext:;
- (void)setCurrentTabItemArray:;
- (void).cxx_destruct;
@end
