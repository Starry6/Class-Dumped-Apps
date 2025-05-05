@interface CNPropertySuggestionAction : CNPropertyAction
@property (nonatomic) CNContactSuggestionViewController suggestionViewController;
@property (nonatomic) q selectedChoice;
- (void).cxx_destruct;
- (void)reject;
- (void)performActionForItem:sender:;
- (BOOL)_confirmOrReject:;
- (id)dataSourceWithPropertyItem:;
- (void)setSelectedChoice:;
- (BOOL)_confirmOrRejectSuggestion:;
- (BOOL)_confirmOrRejectDonation:;
- (void)confirm;
- (long long)selectedChoice;
- (id)suggestionViewController;
- (void)setSuggestionViewController:;
@end
