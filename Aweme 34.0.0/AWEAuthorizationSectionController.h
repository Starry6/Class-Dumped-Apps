@interface AWEAuthorizationSectionController : AWEBaseListSectionController
@property (nonatomic) AWEAuthorizationCollectionViewCell cell;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)playSection;
- (void)pauseSection;
- (id)init;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)cell;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)setCell:;
@end
