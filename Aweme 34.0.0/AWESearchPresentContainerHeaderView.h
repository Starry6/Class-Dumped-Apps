@interface AWESearchPresentContainerHeaderView : UIView
@property (nonatomic) AWESearchPresentContainerHeaderViewConfig config;
@property (nonatomic) @? closeButtonClicked;
@property (nonatomic) @? updateFullScreen;
@property (nonatomic) @? searchButtonClicked;
- (void)onCloseButtonClicked;
- (id)closeButtonClicked;
- (id)initWithFrame:config:;
- (void)setSearchButtonClicked:;
- (id)searchButtonClicked;
- (void)onSearchButtonClicked;
- (void)setCloseButtonClicked:;
- (void)configureUIWithConfig:;
- (id)updateFullScreen;
- (void)setupTheme:;
- (void)onSearchBarClicked;
- (void)configureQueryText:;
- (void)setUpdateFullScreen:;
- (void)setConfig:;
- (id)config;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
