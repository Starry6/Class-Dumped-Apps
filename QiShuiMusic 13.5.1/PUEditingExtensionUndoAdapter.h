@interface PUEditingExtensionUndoAdapter : NSObject
@property (nonatomic) <PUEditingExtensionUndoButtonHost> buttonHost;
@property (nonatomic) NSUndoManager undoManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)setUndoManager:;
- (id)undoManager;
- (void)performUndo;
- (void)performRedo;
- (void)_updateButtonState;
- (id)initWithButtonHost:;
- (void)_registerForUndoManagerNotifications:;
- (void)_unregisterForUndoManagerNotifications:;
- (id)buttonHost;
@end
