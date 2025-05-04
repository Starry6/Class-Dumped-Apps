@interface AWEVideoRelatedStablePageLoadingSectionController : AWEBaseListSectionController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)onShimmerViewUpdated:;
- (id)init;
- (Class)cellClass;
@end
