@interface UITextContextMenuInteraction : UITextInteraction
@property (nonatomic) UIContextMenuInteraction contextMenuInteraction;
@property (nonatomic) <UIContextMenuInteractionDelegate> externalContextMenuDelegate;
@property (nonatomic) BOOL dismissedRecently;
@property (nonatomic) BOOL isDisplayingMenu;
@property (nonatomic) BOOL dismissedByActionSelection;
- (BOOL)isDisplayingMenu;
- (void)presentSelectionCommandsWithConfiguration:;
- (BOOL)dismissedByActionSelection;
- (void)setContextMenuInteraction:;
- (BOOL)dismissedRecently;
- (BOOL)_textInputIsSecure;
- (void)dismissSelectionCommands;
- (void)setExternalContextMenuDelegate:;
- (void)updateVisibleMenuPosition;
- (void)prepareForContextMenuAtLocationInView:completion:;
- (void)presentMenuForInputUI:;
- (id)locationInTextInputViewForLocationInView:;
- (id)externalContextMenuDelegate;
- (id)contextMenuInteraction;
- (void).cxx_destruct;
- (void)dismissMenuForInputUI;
+ (BOOL)shouldUseContextMenuInteraction;
+ (id)createMenuInteraction;
+ (void)setShouldUseContextMenuInteraction:;
@end
