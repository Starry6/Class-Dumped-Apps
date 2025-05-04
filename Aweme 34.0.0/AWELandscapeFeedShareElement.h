@interface AWELandscapeFeedShareElement : AWELandscapeInteractionBaseElement
@property (nonatomic) UIButton feedShareButton;
@property (nonatomic) DUXPopover popover;
- (id)aAWEPadModuleAdapter;
- (void)showInviteWatchToolTip;
- (id)feedShareButton;
- (void)showFeedSharePopoverGuide;
- (void)handleClickFeedShare;
- (void)setFeedShareButton:;
- (void)updateState:;
- (void)viewDidLoad;
- (id)popover;
- (void)setData:;
- (void).cxx_destruct;
- (void)setPopover:;
+ (Class)aAWEPadModuleAdapterClass;
@end
