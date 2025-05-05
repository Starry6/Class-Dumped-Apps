@interface UIPrintOptionListViewController : UITableViewController
@property (nonatomic) <UIPrintOptionListDelegate> listDelegate;
@property (nonatomic) NSArray itemList;
@property (nonatomic) @? onDoneBlock;
- (id)tableView:cellForRowAtIndexPath:;
- (void)viewDidDisappear:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (double)tableView:heightForHeaderInSection:;
- (id)tableView:titleForHeaderInSection:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)itemList;
- (void)setItemList:;
- (id)tableView:titleForFooterInSection:;
- (id)listDelegate;
- (void)setListDelegate:;
- (id)initWithListDelegate:;
- (id)onDoneBlock;
- (void)setOnDoneBlock:;
@end
