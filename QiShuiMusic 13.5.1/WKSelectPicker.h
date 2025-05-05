@interface WKSelectPicker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithView:;
- (BOOL)selectFormAccessoryHasCheckedItemAtRow:;
- (void)dealloc;
- (id)contextMenuInteraction:configuration:highlightPreviewForItemWithIdentifier:;
- (id)_contextMenuInteraction:styleForMenuWithConfiguration:;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (void)contextMenuInteraction:willDisplayMenuForConfiguration:animator:;
- (void).cxx_destruct;
- (id)controlView;
- (void)contextMenuInteraction:willEndForConfiguration:animator:;
- (id).cxx_construct;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)removeContextMenuInteraction;
- (void)ensureContextMenuInteraction;
- (void)selectRow:inComponent:extendingSelection:;
- (void)didSelectOptionIndex:;
- (id)createMenu;
- (id)actionForOptionItem:withIndex:;
- (id)actionForOptionIndex:;
- (void)showSelectPicker;
@end
