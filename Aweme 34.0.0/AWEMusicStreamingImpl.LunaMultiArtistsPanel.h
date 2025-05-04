@interface AWEMusicStreamingImpl.LunaMultiArtistsPanel : UIViewController
@property (nonatomic) NSArray artists;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) UITableView tableView;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)trackParams;
- (void)followStatusChangedWithNoti:;
- (void)setTrackParams:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)artists;
- (void)setArtists:;
@end
