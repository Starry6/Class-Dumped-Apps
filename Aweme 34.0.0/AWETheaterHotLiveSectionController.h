@interface AWETheaterHotLiveSectionController : AWEBaseListSectionController
@property (nonatomic) AWETheaterPageContext context;
@property (nonatomic) AWETheaterTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (void)openLiveCentralizedPage;
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
- (Class)headerViewClass;
@end
