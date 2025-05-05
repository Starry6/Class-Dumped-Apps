@interface CNPropertySendMessageAction : CNPropertyAction
@property (nonatomic) CNContactActionsController actionsController;
@property (nonatomic) CNUIUserActionListDataSource actionsDataSource;
@property (nonatomic) CNActionMenuHelper actionMenuHelper;
@property (nonatomic) UIContextMenuInteraction contextMenuInteraction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContextMenuInteraction:;
- (id)actionMenuHelper;
- (id)contextMenuInteraction;
- (void).cxx_destruct;
- (void)setActionMenuHelper:;
- (void)performActionWithSender:;
- (void)performActionForItem:sender:;
- (id)actionsController;
- (id)menuProviderForContextMenuInteraction:;
- (void)contactActionsController:didSelectAction:;
- (void)contactActionsController:didUpdateWithMenu:;
- (void)setActionsController:;
- (id)actionsDataSource;
- (void)setActionsDataSource:;
- (id)initWithContact:propertyItems:actionDataSource:;
- (BOOL)shouldPresentDisambiguationMenu;
@end
