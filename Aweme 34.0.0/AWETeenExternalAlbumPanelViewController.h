@interface AWETeenExternalAlbumPanelViewController : UIViewController
@property (nonatomic) AWETeenExternalAlbumDataController dataController;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWETeenExternalAlbumTitleView titleView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) NSString anchorAwemeID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)loadMore;
- (void)loadPrevious;
- (void)setDataController:;
- (id)initWithDataController:;
- (void)closeButtonDidClick:;
- (void)scrollToCellAtIndex:;
- (void)setAnchorAwemeID:;
- (id)anchorAwemeID;
- (void)reloadWithAnchorAweme:;
- (id)titleView;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setTitleView:;
- (long long)tableView:numberOfRowsInSection:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (BOOL)tableView:canEditRowAtIndexPath:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
- (id)dataController;
@end
