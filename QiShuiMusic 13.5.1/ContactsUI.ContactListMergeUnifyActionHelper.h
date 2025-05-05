@interface ContactsUI.ContactListMergeUnifyActionHelper : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithContactStore:;
- (void)mergeContacts:withContainerIdentifiers:withContactIDToParentGroupsDict:;
- (BOOL)applyMergeResultToSaveRequest:;
- (BOOL)applyUndoTo:and:;
+ (id)descriptorForRequiredKeys;
@end
