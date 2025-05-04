@interface AWESearchAIGCInputCreatePanelRequireOptionPopover : UIView
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray optList;
@property (nonatomic) @? selectCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)duxPopover_view;
- (id)selectCallback;
- (void)setSelectCallback:;
- (id)optList;
- (void)setOptList:;
- (id)initWithFrame:optList:selectCallback:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)setContentSize:;
- (id)intrinsicContentSize;
- (void)setTableView:;
- (id)contentSize;
- (id)tableView;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
+ (id)listBGColor;
@end
