@interface AWEUserListViewController : UIViewController
@property (nonatomic) AWEUserPickerViewController picker;
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray sectionTitles;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) Q type;
@property (nonatomic) NSString keyword;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)logPassback;
- (void)setLogPassback:;
- (id)titleForEmptyDataSet:;
- (double)verticalOffsetForEmptyDataSet:;
- (BOOL)emptyDataSetShouldDisplay:;
- (void)viewSafeAreaInsetsDidChange;
- (id)tableView:viewForHeaderInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)sectionTitles;
- (void)setDataSource:;
- (double)tableView:heightForHeaderInSection:;
- (void)setSectionTitles:;
- (id)dataSource;
- (id)picker;
- (double)tableView:heightForFooterInSection:;
- (id)keyword;
- (void)setKeyword:;
- (void)setPicker:;
@end
