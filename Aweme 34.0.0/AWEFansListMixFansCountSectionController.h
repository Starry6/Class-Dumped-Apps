@interface AWEFansListMixFansCountSectionController : AWEBaseListSectionController
@property (nonatomic) BOOL hasTracked;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (BOOL)hasTracked;
- (void)setHasTracked:;
- (Class)cellClass;
- (BOOL)showSeparator;
@end
