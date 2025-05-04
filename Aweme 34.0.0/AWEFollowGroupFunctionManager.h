@interface AWEFollowGroupFunctionManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)createNewGroupWithName:completion:;
+ (void)updateGroupWithNewName:groupID:completion:;
+ (void)deleteGroupWithGroupID:completion:;
+ (void)getAllGroupListWithGroupType:sourceType:completion:;
+ (void)getAllGroupListInPanelWithUserID:completion:;
+ (void)getAllGroupListInAddPageWithCompletion:;
+ (void)getGroupListWithCursor:perPageCount:maxMemberCount:groupType:sourceType:completion:;
+ (void)getGroupTotalCountInFollowListWithCompletion:;
+ (void)updateUserBelongGroups:oldBelongGroupIDs:newBelongGroupIDs:completion:;
+ (void)getGroupUserListWithGroupID:perPageCount:completion:;
+ (BOOL)isCommerceGroup:;
+ (BOOL)isSpecialGroup:;
@end
