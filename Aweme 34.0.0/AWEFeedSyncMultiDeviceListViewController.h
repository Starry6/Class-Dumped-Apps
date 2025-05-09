@interface AWEFeedSyncMultiDeviceListViewController : UIViewController
@property (nonatomic) UITableView listView;
@property (nonatomic) AWEFeedSyncMultiDeviceViewHeader header;
@property (nonatomic) BOOL startLoading;
@property (nonatomic) NSArray deviceData;
@property (nonatomic) @? selectedBlock;
@property (nonatomic) @? reFreshBlock;
@property (nonatomic) AWEFeedSyncMultiDeviceLoadingCell loadingCell;
@property (nonatomic) AWEFeedSyncMultiDeviceHelpCell helpCell;
@property (nonatomic) Q theme;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} helpAnimOrigin;
@property (nonatomic) UIView containerView;
@property (nonatomic) DUXLoadingParticleView loadingView;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) UILabel deviceSectionHeader;
@property (nonatomic) UILabel helpSectionHeader;
@property (nonatomic) UIView deviceSectionHeaderContainer;
@property (nonatomic) UIView helpSectionHeaderContainer;
@property (nonatomic) BOOL needAppendData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)setSelectedBlock:;
- (id)selectedBlock;
- (void)updateWithDeviceData:;
- (id)initWithTheme:selectedBlock:refreshBlock:;
- (BOOL)needAppendData;
- (void)appendWithDeviceData:;
- (void)reloadWithDeviceData:;
- (void)appendRefreshData:;
- (id)helpCell;
- (id)helpSectionHeader;
- (id)reFreshBlock;
- (id)deviceSectionHeader;
- (void)setLoadingCell:;
- (id)deviceSectionHeaderContainer;
- (id)helpSectionHeaderContainer;
- (void)setStartLoading:;
- (void)setReFreshBlock:;
- (id)loadingCell;
- (void)setHelpCell:;
- (id)helpAnimOrigin;
- (void)setHelpAnimOrigin:;
- (void)setDeviceSectionHeader:;
- (void)setHelpSectionHeader:;
- (void)setDeviceSectionHeaderContainer:;
- (void)setHelpSectionHeaderContainer:;
- (void)setNeedAppendData:;
- (BOOL)isDark;
- (unsigned long long)theme;
- (id)themeColor;
- (void)setTheme:;
- (void)viewSafeAreaInsetsDidChange;
- (id)tableView:viewForHeaderInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)header;
- (BOOL)isRefreshing;
- (BOOL)startLoading;
- (long long)numberOfSectionsInTableView:;
- (void)handleRefresh;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)listView;
- (id)containerView;
- (id)loadingView;
- (void)setListView:;
- (void)setContainerView:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (double)tableView:heightForHeaderInSection:;
- (void)setHeader:;
- (double)tableView:estimatedHeightForRowAtIndexPath:;
- (void)setupUI;
- (id)deviceData;
- (void)setDeviceData:;
- (void)setIsRefreshing:;
@end
