@interface AWEBookImpl.BookBaseListViewModel : AWEBaseListViewModel
- (id)provider:;
- (void)updateBySectionViewModels:;
- (void)updateBySectionViewModels:animated:;
- (void)appendSectionViewModels:animated:;
- (void)insertSectionViewModel:atIndex:;
- (void)insertSectionViewModel:atIndex:animated:;
- (void)insertSectionViewModels:atIndexes:animated:;
- (void)insertSectionViewModels:atIndexes:;
- (void)appendSectionViewModels:;
- (void)replaceBySectionViewModels:;
- (id)init;
@end
