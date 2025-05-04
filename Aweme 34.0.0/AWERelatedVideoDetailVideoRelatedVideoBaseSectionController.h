@interface AWERelatedVideoDetailVideoRelatedVideoBaseSectionController : AWEBaseListSectionController
@property (nonatomic) AWERVDetailPageContext pageContext;
- (id)sizeForHeaderWithCollectionViewSize:;
- (void)configSupplementaryHeaderView:;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
- (Class)headerViewClass;
+ (Class)sectionViewModelClass;
@end
