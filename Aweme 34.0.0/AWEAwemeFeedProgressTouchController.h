@interface AWEAwemeFeedProgressTouchController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL allowSetBottomBar;
@property (nonatomic) BOOL shouldShowBottomBar;
@property (nonatomic) BOOL shouldShowBottomBarByCoordinator;
@property (nonatomic) BOOL shouldShowBottomBarByCellCoordinator;
- (BOOL)shouldShowBottomBar;
- (void)setShouldShowBottomBar:;
- (void)progressTouchBegin:;
- (void)progressTouchEnd:;
- (BOOL)allowSetBottomBar;
- (BOOL)shouldResponseBottomBarHidden:;
- (void)setShouldShowBottomBarByCoordinator:;
- (void)setShouldShowBottomBarByCellCoordinator:;
- (void)setAllowSetBottomBar:;
- (BOOL)shouldShowBottomBarWhenTouchEnd;
- (BOOL)shouldShowBottomBarByCoordinator;
- (BOOL)shouldShowBottomBarByCellCoordinator;
- (id)init;
- (void)viewDidLoad;
@end
