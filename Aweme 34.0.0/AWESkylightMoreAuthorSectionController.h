@interface AWESkylightMoreAuthorSectionController : AWECommonUserListSectionController
@property (nonatomic) BOOL isMoreMenuShowing;
@property (nonatomic) NSMutableDictionary trackedUserDic;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)configSupplementaryHeaderView:;
- (BOOL)isMoreMenuShowing;
- (void)setIsMoreMenuShowing:;
- (void)__alienationOptionButtonTappedWithModel:index:;
- (id)trackedUserDic;
- (void)setTrackedUserDic:;
- (Class)cellClass;
- (void).cxx_destruct;
- (Class)headerViewClass;
+ (Class)sectionViewModelClass;
@end
