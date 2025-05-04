@interface AWEKnowledgeSwiftBasic.FullPageBaseSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (id)init;
- (void).cxx_destruct;
+ (Class)sectionViewModelClass;
@end
