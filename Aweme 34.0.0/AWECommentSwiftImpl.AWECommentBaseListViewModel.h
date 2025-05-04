@interface AWECommentSwiftImpl.AWECommentBaseListViewModel : AWEBaseListViewModel
- (void)updateBySectionViewModels:;
- (void)updateBySectionViewModels:animated:;
- (void)appendSectionViewModels:animated:;
- (void)insertSectionViewModel:atIndex:;
- (void)insertSectionViewModel:atIndex:animated:;
- (void)removeSectionViewModels:animated:;
- (void)appendSectionViewModels:;
- (void)replaceBySectionViewModels:;
- (void)removeSectionViewModels:;
- (void)replaceBySectionViewModels:sync:;
- (void)updateBySectionViewModels:animated:sync:;
- (void)appendSectionViewModels:animated:sync:;
- (void)insertSectionViewModel:atIndex:animated:sync:;
- (void)removeSectionViewModels:animated:sync:;
- (id)init;
- (void).cxx_destruct;
@end
