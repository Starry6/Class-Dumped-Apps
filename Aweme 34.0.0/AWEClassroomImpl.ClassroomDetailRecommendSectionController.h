@interface AWEClassroomImpl.ClassroomDetailRecommendSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (id)init;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
- (Class)headerViewClass;
@end
