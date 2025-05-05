@interface WKQuirkyNSUndoManager : NSUndoManager
@property (nonatomic) WKContentView contentView;
- (BOOL)canUndo;
- (id)initWithContentView:;
- (id)contentView;
- (void)undo;
- (void)redo;
- (BOOL)canRedo;
- (void).cxx_destruct;
@end
