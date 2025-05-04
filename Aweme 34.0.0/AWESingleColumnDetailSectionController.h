@interface AWESingleColumnDetailSectionController : AWEBaseListSectionController
@property (nonatomic) AWESingleColumnDetailPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didSelectItemAtIndex:model:;
- (id)customLogExtraDict;
- (id)init;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
+ (Class)sectionViewModelClass;
@end
