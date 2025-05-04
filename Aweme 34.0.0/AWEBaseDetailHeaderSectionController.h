@interface AWEBaseDetailHeaderSectionController : AWEBaseListSectionController
@property (nonatomic) double sectionHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)detailHeaderView;
- (void)updateHeaderViewWithModel:;
- (void)setSectionHeightAnimated:completion:;
- (Class)cellClass;
- (double)sectionHeight;
- (void)setSectionHeight:;
@end
