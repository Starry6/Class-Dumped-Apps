@interface WKDataListSuggestionsPopover : WKDataListSuggestionsControl
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (id)initWithInformation:inView:;
- (void)updateWithInformation:;
- (void)showSuggestionsDropdown:activationType:;
- (void)didSelectOptionAtIndex:;
@end
