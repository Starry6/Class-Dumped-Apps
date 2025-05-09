@interface AWESchoolVisibleViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray visibleArray;
@property (nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> visibleAllCell;
@property (nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> visibleAlumniCell;
@property (nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> visibleSelfCell;
@property (nonatomic) Q visibleType;
@property (nonatomic) @? changeVisibleTypeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatusBarBackgroundColor:;
- (unsigned long long)visibleType;
- (void)setVisibleType:;
- (void)setChangeVisibleTypeBlock:;
- (id)visibleAllCell;
- (id)visibleAlumniCell;
- (id)visibleSelfCell;
- (void)setVisibleArray:;
- (id)visibleArray;
- (BOOL)isSelectedWithType:;
- (id)changeVisibleTypeBlock;
- (id)titleWithVisibleType:;
- (void)setVisibleAllCell:;
- (void)setVisibleAlumniCell:;
- (void)setVisibleSelfCell:;
- (void)viewWillDisappear:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)back;
@end
