@interface AWESkylightOftenWatchSectionController : AWECommonUserListSectionController
@property (nonatomic) BOOL isMoreMenuShowing;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (BOOL)isMoreMenuShowing;
- (void)setIsMoreMenuShowing:;
- (void)__alienationOptionButtonTappedWithModel:index:;
- (id)separatorColor;
- (Class)cellClass;
- (BOOL)showSeparator;
- (id)inset;
- (id)separatorInsets;
- (Class)headerViewClass;
+ (Class)sectionViewModelClass;
@end
