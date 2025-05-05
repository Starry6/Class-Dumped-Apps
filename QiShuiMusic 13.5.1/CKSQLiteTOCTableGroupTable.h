@interface CKSQLiteTOCTableGroupTable : CKSQLiteTOCTableBase
- (id)genericTableGroupWithName:error:;
- (id)invalidateGroup:;
- (id)newEntryObject;
- (id)saveGroupName:;
- (id)tableGroupsWithClass:;
- (id)updateGroupData:;
- (void)updateLastUsedDate:;
- (id)tableGroupOfClass:withName:error:;
+ (BOOL)isInvalidGroupName:;
+ (id)dbTableName;
+ (id)dbProperties;
+ (Class)entryClass;
+ (id)invalidGroupNameForGroupName:;
@end
