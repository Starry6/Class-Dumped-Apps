@interface AWEAwemeDetailBottomMaskController : AWEAwemeNewDetailBaseController
@property (nonatomic) UIImageView maskImageView;
- (void)userChangedFrom:to:;
- (void)cellWillDisplay:forRowAtIndexPath:tableView:;
- (id)watermarkManager;
- (void)viewDidLoadAfterTableviewSetup;
- (void)onScrollDidEndWithIndexPath:;
- (void)addNotifications;
- (void)setupMaskImageView;
- (void)bindEvents;
- (void)updateMaskViewPositionIfNeed;
- (void)changeTopMaskImage:;
- (double)maskViewHeight;
- (void)dealloc;
- (id)maskImageView;
- (void).cxx_destruct;
- (void)setMaskImageView:;
@end
