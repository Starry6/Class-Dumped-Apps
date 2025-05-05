@interface DiagnosticDataController : PSListController
@property (nonatomic) UISearchController searchController;
@property (nonatomic) Q _state;
@property (nonatomic) NSArray _allSpecifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specifiers;
- (unsigned long long)_state;
- (id)init;
- (void)setSearchController:;
- (void)updateSearchResultsForSearchController:;
- (void).cxx_destruct;
- (id)searchController;
- (void)viewDidLoad;
- (void)_loadDiagnosticsDataWithCompletion:;
- (void)set_state:;
- (id)_allSpecifiers;
- (void)set_allSpecifiers:;
@end
