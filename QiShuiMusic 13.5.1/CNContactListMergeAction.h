@interface CNContactListMergeAction : CNContactListUndoableAction
@property (nonatomic) _TtC10ContactsUI33ContactListMergeUnifyActionHelper mergeUnifyActionHelper;
@property (nonatomic) CNUIGroupsAndContainersSaveManager groupsAndContainersSaveManager;
- (void)setGroupsAndContainersSaveManager:;
- (void)performAction;
- (id)groupsAndContainersSaveManager;
- (void).cxx_destruct;
- (BOOL)shouldReloadListOnCompletion;
- (void)performUndoAction;
- (BOOL)executeAction;
- (BOOL)mergeWillRequireLinkingForContacts:;
- (void)showMergeFailureAlert;
- (id)mergeUnifyActionHelper;
- (void)setMergeUnifyActionHelper:;
+ (id)log;
+ (id)descriptorForRequiredKeys;
@end
