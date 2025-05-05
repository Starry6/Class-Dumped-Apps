@interface CNContactListUndoableAction : CNContactListAction
@property (nonatomic) <CNContactListActionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldReloadListOnCompletion;
- (void)performUndoAction;
@end
