@interface AWEBlockMessageSettingSelfDefinedViewController : UIViewController
@property (nonatomic) NSMutableArray words;
@property (nonatomic) AWEIMChatBlockSettingModel serverModel;
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (void)setTrackParams:;
- (void)backBtnClick:;
- (void)addThemeChangeObserver;
- (void)p_didThemeChanged;
- (void)setServerModel:;
- (id)serverModel;
- (void)p_trackSelfDefinedWordWithUpdateTypeIsAdd:blockWord:;
- (void)sendRequestToChangeAdvancedSetting:;
- (id)initWithServerModel:trackParams:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setWords:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (id)words;
- (void)configData;
@end
