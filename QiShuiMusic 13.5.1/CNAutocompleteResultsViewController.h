@interface CNAutocompleteResultsViewController : UIViewController
@property (nonatomic) CNAutocompleteResultsTableViewController resultsTableController;
@property (nonatomic) Q mode;
@property (nonatomic) NSArray recipients;
@property (nonatomic) BOOL showsSuggestions;
- (id)initWithMode:;
- (id)recipients;
- (void)selectPreviousSearchResult;
- (void)setRecipients:;
- (void).cxx_destruct;
- (void)selectNextSearchResult;
- (unsigned long long)mode;
- (void)viewDidLoad;
- (void)removeRecipient:;
- (void)invalidateAddressTintColors;
- (void)invalidatePreferredRecipients;
- (BOOL)expandSelectedRecipient;
- (BOOL)collapseSelectedRecipient;
- (BOOL)commitSelectionOfRecipient;
- (BOOL)showsSuggestions;
- (void)setShowsSuggestions:;
- (id)resultsTableController;
- (void)setResultsTableController:;
@end
