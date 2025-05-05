@interface AVMediaSelectionTableViewController : UITableViewController
@property (nonatomic) AVPlayerController playerController;
- (void)dealloc;
- (id)tableView:cellForRowAtIndexPath:;
- (id)playerController;
- (void)setPlayerController:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)tableView:titleForHeaderInSection:;
- (id)initWithStyle:;
- (void)tableView:willDisplayHeaderView:forSection:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (void)playerControllerMediaSelectionChanged:;
- (BOOL)_isSelectedOrCurrentAudioMediaSelectionOption:;
- (BOOL)_isSelectedOrCurrentLegibleMediaSelectionOption:;
@end
