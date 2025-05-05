@interface WKDataListSuggestionsViewController : UITableViewController
@property (nonatomic) WKDataListSuggestionsControl control;
- (void)reloadData;
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (long long)tableView:numberOfRowsInSection:;
- (id)control;
- (void)setControl:;
@end
