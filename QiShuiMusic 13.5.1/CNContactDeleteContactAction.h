@interface CNContactDeleteContactAction : CNContactAction
@property (nonatomic) CNUIExternalComponentsFactory componentsFactory;
@property (nonatomic) CNUICoreRecentsManager recentsManager;
- (id)recentsManager;
- (void).cxx_destruct;
- (id)componentsFactory;
- (void)performActionWithSender:;
- (id)initWithContact:recentsManager:componentsFactory:;
- (BOOL)deleteContact;
- (void)showDeleteFailureAlert;
@end
