@interface IESECSearchSuggestViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) <IESECSearchSuggestViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)iesec_overrideColorTheme;
- (void)searchSuggestCellDidClickPopulateButton:;
- (void)searchSuggestCellDidSelectSuggestionItem:;
- (void)setDataSource:;
- (void)updateSuggestions:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setDelegate:;
- (void)scrollViewDidScroll:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (void)setTableView:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
@end
