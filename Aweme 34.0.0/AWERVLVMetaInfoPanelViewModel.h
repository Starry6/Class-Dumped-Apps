@interface AWERVLVMetaInfoPanelViewModel : AWERVLVBasePanelViewModel
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWELVideoAlbumInfoModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refreshModel:;
- (void)panelDidLoad;
- (id)panelContentView;
- (double)pushPanelTopPadding;
- (void)setModel:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)setTableView:;
- (id)tableView;
- (id)contentScrollView;
- (id)model;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
@end
