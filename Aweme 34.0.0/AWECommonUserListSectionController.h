@interface AWECommonUserListSectionController : AWERelationUserListBaseSectionController
@property (nonatomic) # cellCls;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (id)customUserProps:;
- (void)showMenuWithUser:;
- (Class)cellCls;
- (void)showMoreMenuWithUserAdapterModel:;
- (void)setCellCls:;
- (long long)type;
- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isMine;
- (BOOL)isSearch;
- (id)pageIdentifier;
- (void)moreButtonTapped:;
@end
