@interface MSDeleteTriageAction : MSTriageAction
- (id)_changeAction;
- (void)performWithUndoManager:actionName:completion:;
@end
