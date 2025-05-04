@interface AWELVideoAlbumBaseSectionController : AWEBaseListSectionController
@property (nonatomic) AWELVideoHallTracker tracker;
@property (nonatomic) AWEVideoHallPageContext context;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)enterFrom;
- (void)didSelectItemAtIndex:model:;
- (void)trackLVideoClickWithModel:index:;
- (id)init;
- (id)tracker;
- (Class)cellClass;
- (void)setTracker:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
