@interface UIEditingOverlayViewController : UIViewController
@property (nonatomic) UIUndoGestureInteraction undoInteraction;
@property (nonatomic) _UIActionWhenIdle addPencilTextInputInteractionAction;
@property (nonatomic) <UIInteraction> pencilTextInputInteraction;
- (void)updateEditingOverlayContainer;
- (void)setAddPencilTextInputInteractionAction:;
- (void)_removeInteractions;
- (id)pencilTextInputInteraction;
- (BOOL)_canShowWhileLocked;
- (void)setUndoInteraction:;
- (void)viewDidDisappear:;
- (id)undoInteraction;
- (void)_addPencilTextInputInteraction;
- (id)addPencilTextInputInteractionAction;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)_addInteractions;
- (void)loadView;
- (void)setPencilTextInputInteraction:;
- (void)viewDidLoad;
@end
