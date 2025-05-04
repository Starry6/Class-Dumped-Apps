@interface AWEFeedSyncMultiDeviceViewHeader : UIView
@property (nonatomic) UILabel title;
@property (nonatomic) UIButton refresh;
@property (nonatomic) @? refreshBlock;
- (void)setupUI:;
- (void)updateSearchStatus:;
- (id)initWithTheme:refreshBlock:;
- (void)clickRefresh;
- (id)refresh;
- (void)setRefresh:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)refreshBlock;
- (void)setRefreshBlock:;
@end
