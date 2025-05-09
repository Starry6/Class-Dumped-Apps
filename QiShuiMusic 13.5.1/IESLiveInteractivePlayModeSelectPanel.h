@interface IESLiveInteractivePlayModeSelectPanel : IESLiveInteractionPopupViewController
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView titleSeperatorLineView;
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray playModes;
@property (nonatomic) @? tapBlock;
@property (nonatomic) @? displayBlock;
@property (nonatomic) BOOL isRoot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displayBlock;
- (id)initWithPlayModes:;
- (void)onSetupNavBar:;
- (id)playModes;
- (void)setDisplayBlock:;
- (void)setPlayModes:;
- (void)setTapBlock:;
- (void)setTitleSeperatorLineView:;
- (id)tapBlock;
- (id)titleSeperatorLineView;
- (void)setTitleLabel:;
- (id)tableView:cellForRowAtIndexPath:;
- (BOOL)isRoot;
- (double)tableView:heightForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setTableView:;
- (id)titleLabel;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (void)setIsRoot:;
- (void)setupViews;
- (double)contentViewHeight;
@end
