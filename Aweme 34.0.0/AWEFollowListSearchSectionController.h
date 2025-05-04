@interface AWEFollowListSearchSectionController : AWERelationUserListBaseSectionController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:model:;
- (unsigned long long)activeUserSourceType;
- (void)__moreOptionButtonTapped:model:;
- (void)trackTopFollowingWithUserModel:originalTopStatus:buttonType:error:;
- (void)__showMenuWithUser:;
- (void)refreshUserFriendStatus:;
- (void)__topFollowingUser:succeed:;
- (void)__untopFollowingUser:succeed:;
- (id)separatorColor;
- (id)sectionBackgroundColor;
- (long long)type;
- (BOOL)isMine;
- (BOOL)isSearch;
- (id)pageIdentifier;
+ (Class)sectionViewModelClass;
@end
