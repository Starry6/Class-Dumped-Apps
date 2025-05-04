@interface AWETeenFeedSearchController : AWETeenFeedBaseController
@property (nonatomic) UIView returnButton;
@property (nonatomic) AWETeenSingleVideoSearchBar searchButton;
- (void)setReturnButton:;
- (id)returnButton;
- (void)hideControlView:animated:;
- (void)p_startSearchQualityScene;
- (void)triggerSearchAction:;
- (void)p_checkGuideStatus;
- (void)p_addSearchButton;
- (id)searchButton;
- (void)play;
- (void)viewDidLoad;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)setSearchButton:;
@end
