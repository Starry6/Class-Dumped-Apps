@interface SFContactAutoFillViewController : UITableViewController
@property (nonatomic) <SFContactAutoFillViewControllerFiller> autoFiller;
- (id)tableView:cellForRowAtIndexPath:;
- (BOOL)canBecomeFirstResponder;
- (id)properties;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (void)autoFill:;
- (void)_cancel:;
- (id)initWithMatches:contact:;
- (id)_valueForProperty:identifier:;
- (id)matchesForProperty:;
- (id)valuesFromPropertyMatches:;
- (id)autoFiller;
- (void)setAutoFiller:;
@end
