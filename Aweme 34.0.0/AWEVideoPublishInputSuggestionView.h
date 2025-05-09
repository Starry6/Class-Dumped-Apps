@interface AWEVideoPublishInputSuggestionView : UIView
@property (nonatomic) Q style;
@property (nonatomic) AWETextLoadingView loadingView;
@property (nonatomic) UITableView tableView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) AWEHashtagSuggestionViewConfig config;
@property (nonatomic) Q state;
@property (nonatomic) Q triggerAction;
@property (nonatomic) BOOL showHitBlockListTip;
@property (nonatomic) NSArray suggestions;
@property (nonatomic) @? didChooseSuggestionBlock;
@property (nonatomic) BOOL isSearchMode;
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) NSDictionary commomTrackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishViewModel;
- (BOOL)isSearchMode;
- (void)setIsSearchMode:;
- (void)buildUI;
- (void)setPublishViewModel:;
- (id)commomTrackParams;
- (void)setDidChooseSuggestionBlock:;
- (void)setShowHitBlockListTip:;
- (void)updateCellStyle:;
- (id)generateTrackStringWithIndexpath:;
- (id)didChooseSuggestionBlock;
- (BOOL)showHitBlockListTip;
- (void)setCommomTrackParams:;
- (void)setSuggestions:;
- (void)setConfig:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)setLoadingView:;
- (id)config;
- (id)tableView;
- (id)loadingView;
- (void)didAddSubview:;
- (unsigned long long)state;
- (unsigned long long)style;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)initWithStyle:;
- (id)suggestions;
- (void)setState:;
- (void)setStyle:;
- (void)setTipLabel:;
- (void)setTriggerAction:;
- (id)tipLabel;
- (unsigned long long)triggerAction;
@end
