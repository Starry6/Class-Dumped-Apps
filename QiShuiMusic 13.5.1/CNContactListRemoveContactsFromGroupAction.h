@interface CNContactListRemoveContactsFromGroupAction : CNContactListUndoableAction
@property (nonatomic) CNUIExternalComponentsFactory componentsFactory;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) q originalContactCount;
@property (nonatomic) NSArray actions;
@property (nonatomic) BOOL confirmAction;
- (void)setContactStore:;
- (void)setActions:;
- (void)performAction;
- (id)actions;
- (void).cxx_destruct;
- (id)componentsFactory;
- (id)contactStore;
- (BOOL)editRequiresAuthorization;
- (BOOL)shouldReloadListOnCompletion;
- (void)performUndoAction;
- (id)initWithContacts:configuration:withConfirmation:;
- (void)performAuthorizedRemoveFromGroup:;
- (void)showRemoveFromGroupFailureAlert;
- (BOOL)editRequiresAuthorizationCheckForActions:;
- (id)groupToRemoveFrom;
- (long long)originalContactCount;
- (void)setOriginalContactCount:;
- (BOOL)confirmAction;
- (void)setConfirmAction:;
+ (id)log;
+ (id)descriptorForRequiredKeys;
+ (id)actionForContact:configuration:;
@end
