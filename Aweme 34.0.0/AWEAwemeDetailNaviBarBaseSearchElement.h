@interface AWEAwemeDetailNaviBarBaseSearchElement : AWEAwemeDetailNaviBarBaseElement
@property (nonatomic) BOOL hasAppearInnerRelateGuide;
@property (nonatomic) UIView discoverEntranceView;
- (void)jumpSearchToResult:;
- (id)discoverEntranceView;
- (void)setDiscoverEntranceView:;
- (void)onDiscoverButtonClicked:;
- (void)jumpSearchToResult:ges:;
- (BOOL)showInnerRelatedRecommodGuide;
- (BOOL)hasAppearInnerRelateGuide;
- (void)setHasAppearInnerRelateGuide:;
- (void)showSearchUserGuide;
- (void)jumpPhotoSearch;
- (double)searchEntranceHeight;
- (void)viewDidAppearForGuide;
- (void)jumpSearchToResultForPublic:;
- (void).cxx_destruct;
@end
