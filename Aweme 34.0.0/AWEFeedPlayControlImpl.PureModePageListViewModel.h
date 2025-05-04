@interface AWEFeedPlayControlImpl.PureModePageListViewModel : AWEBaseListViewModel
- (void)appendSectionViewModels:animated:;
- (void)insertSectionViewModel:atIndex:;
- (void)insertSectionViewModel:atIndex:animated:;
- (void)loadMoreListData;
- (void)replaceBySectionViewModels:sync:;
- (void)updateBySectionViewModels:animated:sync:;
- (id)init;
- (void).cxx_destruct;
@end
