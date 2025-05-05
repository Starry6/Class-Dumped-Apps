@interface UIPrinterUtilityTableViewController : UITableViewController
@property (nonatomic) NSArray supplyData;
- (void)didReceiveMemoryWarning;
- (id)tableView:cellForRowAtIndexPath:;
- (void)viewDidDisappear:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (double)tableView:heightForHeaderInSection:;
- (void)viewDidLayoutSubviews;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)tableView:titleForFooterInSection:;
- (id)initWithPrinter:;
- (void)setShowContactingPrinter:;
- (void)stopPrinterWarningPolling;
- (void)setSupplyData:;
- (void)startPrinterWarningPoll;
- (id)supplyData;
@end
