@interface CNContactListActionExecutor : NSObject
@property (nonatomic) NSUndoManager undoManager;
@property (nonatomic) CNUIEditAuthorizationController editAuthorizationController;
@property (nonatomic) CNContactListActionAuthorizationContext authorizationContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)editAuthorizationController:authorizationDidFinishWithResult:;
- (id)authorizationContext;
- (id)editAuthorizationController;
- (void).cxx_destruct;
- (id)undoManager;
- (void)setEditAuthorizationController:;
- (void)undoAction:;
- (id)initWithUndoManager:;
- (void)executeAction:;
- (void)executeUndoableAction:;
- (BOOL)showEditAuthorizationPaneForAction:withActionType:;
- (void)showEditAuthorizationPane:animated:forAction:;
- (void)setAuthorizationContext:;
@end
