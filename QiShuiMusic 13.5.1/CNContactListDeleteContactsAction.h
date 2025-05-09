@interface CNContactListDeleteContactsAction : CNContactListUndoableAction
@property (nonatomic) CNUIExternalComponentsFactory componentsFactory;
@property (nonatomic) CNUICoreRecentsManager recentsManager;
@property (nonatomic) CNContactFormatter contactFormatter;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) q originalContactCount;
@property (nonatomic) NSArray actions;
- (void)setContactStore:;
- (id)contactFormatter;
- (void)setActions:;
- (void)performAction;
- (id)recentsManager;
- (void)setContactFormatter:;
- (id)actions;
- (void).cxx_destruct;
- (id)componentsFactory;
- (id)contactStore;
- (id)alertTitle;
- (BOOL)editRequiresAuthorization;
- (BOOL)shouldReloadListOnCompletion;
- (void)performUndoAction;
- (void)showDeleteFailureAlert;
- (id)initWithContacts:configuration:;
- (BOOL)editRequiresAuthorizationCheckForActions:;
- (long long)originalContactCount;
- (void)setOriginalContactCount:;
+ (id)log;
+ (id)descriptorForRequiredKeys;
+ (id)actionForContact:configuration:;
@end
