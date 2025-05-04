@interface AWESkylightUnreadSearchSectionController : AWECommonUserListSectionController
@property (nonatomic) BOOL isMoreMenuShowing;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (id)customUserProps:;
- (void)updateActiveUserState:;
- (BOOL)isMoreMenuShowing;
- (void)setIsMoreMenuShowing:;
- (Class)cellClass;
- (BOOL)isSearch;
- (id)pageIdentifier;
+ (Class)sectionViewModelClass;
@end
