@interface AWERelationFollowMemberSelectionBaseDataController : AWEBaseDataController
- (id)filterContactArray:withContainerUIDList:;
- (void)__sortedSectionsTitlesWithContacts:completeBlock:;
- (void)fetchAllSystemGroupsWithCompletion:;
- (void)fetchAllUidsWithGroupID:completion:;
- (void)fetchDataSourceWithContainerUIDList:completion:;
+ (void)userActionWithUserList:secUidList:groupID:actionType:completion:;
@end
