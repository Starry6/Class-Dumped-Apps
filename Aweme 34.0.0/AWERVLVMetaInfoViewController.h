@interface AWERVLVMetaInfoViewController : AWERVMetaPanelViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWELVideoAlbumInfoModel model;
@property (nonatomic) @? metaInfoCloseBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refreshModel:;
- (void)setMetaInfoCloseBlock:;
- (id)panelContentView;
- (id)metaInfoCloseBlock;
- (void)setModel:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLayoutSubviews;
- (void)setTableView:;
- (id)tableView;
- (id)contentScrollView;
- (id)model;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)closeButtonTapped;
@end
