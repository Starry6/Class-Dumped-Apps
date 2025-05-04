@interface AWELVideoLibraryResultSectionController : AWELVideoAlbumBaseSectionController
@property (nonatomic) AWELVideoLibraryPageContext pageContext;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)enterFrom;
- (void)didSelectItemAtIndex:model:;
- (void)trackLVideoClickWithModel:index:;
- (void).cxx_destruct;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)setPageContext:;
- (id)pageContext;
@end
