@interface AWETeenLongPressTableView : UITableView
@property (nonatomic) NSArray dataArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)borderForView:;
- (void)setSectionCornreRadiusAndLines:forRowAtIndexPath:;
- (void)configCell:indexPath:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)init;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)dataArray;
- (void)setupUI;
- (void)setDataArray:;
@end
