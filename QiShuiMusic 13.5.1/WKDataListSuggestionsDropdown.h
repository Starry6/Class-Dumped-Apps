@interface WKDataListSuggestionsDropdown : WKDataListSuggestionsControl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contextMenuInteraction:configuration:highlightPreviewForItemWithIdentifier:;
- (id)_contextMenuInteraction:styleForMenuWithConfiguration:;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (void)contextMenuInteraction:willDisplayMenuForConfiguration:animator:;
- (void).cxx_destruct;
- (void)contextMenuInteraction:willEndForConfiguration:animator:;
- (void)invalidate;
- (id).cxx_construct;
- (id)initWithInformation:inView:;
- (void)updateWithInformation:;
- (void)showSuggestionsDropdown:activationType:;
- (void)didSelectOptionAtIndex:;
- (void)_displayWithActivationType:;
- (void)_showSuggestions;
- (void)_updateTextSuggestions;
- (void)_updateSuggestionsMenuElements;
- (void)_removeContextMenuInteraction;
- (void)_suggestionsMenuDidPresent;
- (void)_suggestionsMenuDidDismiss;
- (id)_preferredEdgeInsetsForSuggestionsMenu;
@end
