@interface AWEIMGroupEntryLimitsViewController : UIViewController
@property (nonatomic) NSArray entrySettings;
@property (nonatomic) NSMutableDictionary groupEntryLimitDict;
@property (nonatomic) NSMutableDictionary trackEntryLimitDict;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEBubble activeBubble;
@property (nonatomic) AWEIMGroupEntryLimitsBubbleWindowView bubbleWindow;
@property (nonatomic) BOOL isBubbleShowing;
@property (nonatomic) <AWEIMGroupEntryLimitsViewControllerProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isBubbleShowing;
- (id)activeBubble;
- (void)arrowClickedForSection:;
- (void)backBtnClicked;
- (id)bubbleWindow;
- (void)dismissBubble;
- (id)entrySettings;
- (id)groupEntryLimitDict;
- (id)initWithGroupEntrySettingMenuModel:GroupEntryLimitDict:;
- (BOOL)isSelectedWithIndexPath:;
- (void)pressDetailIconBtn:;
- (void)setActiveBubble:;
- (void)setBubbleWindow:;
- (void)setEntrySettings:;
- (void)setGroupEntryLimitDict:;
- (void)setIsBubbleShowing:;
- (void)setTrackEntryLimitDict:;
- (id)trackEntryLimitDict;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setDelegate:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)tableView:viewForHeaderInSection:;
- (void)viewWillDisappear:;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setTableView:;
- (double)tableView:heightForHeaderInSection:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (void)setupUI;
@end
