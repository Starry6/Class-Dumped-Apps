@interface WebThreadSafeUndoManager : NSUndoManager
- (void)undo;
- (void)redo;
- (BOOL)_alwaysShowEditAlertView;
@end
