@interface AWESearchAIGCHotspotTipsView : UIView
@property (nonatomic) <AWESearchAIGCHotspotTipsViewDelegate> delegate;
@property (nonatomic) UITableView hotspotListView;
@property (nonatomic) AWESearchAIGCHotspotTipsViewModel dataSource;
@property (nonatomic) UIView navigationBar;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) UIImageView gradientImageView;
@property (nonatomic) UIImageView hotspotListViewGradientImageView;
@property (nonatomic) q numberOfCellsToShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)closeBtn;
- (void)setCloseBtn:;
- (void)closeButtonClick;
- (void)reloadUIWithViewModel:;
- (id)hotspotListView;
- (id)hotspotListViewGradientImageView;
- (void)calculateNumberOfCellsToShow;
- (long long)numberOfCellsToShow;
- (void)setNumberOfCellsToShow:;
- (void)trackEvent:indexPath:;
- (id)gradientImageWithSize:;
- (id)initWithHotspotTipsViewDelegate:;
- (void)setHotspotListView:;
- (void)setHotspotListViewGradientImageView:;
- (id)tableView:cellForRowAtIndexPath:;
- (id)navigationBar;
- (long long)tableView:numberOfRowsInSection:;
- (id)delegate;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setDataSource:;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setNavigationBar:;
- (id)dataSource;
- (void)setupUI;
- (id)gradientImageView;
- (void)setGradientImageView:;
@end
