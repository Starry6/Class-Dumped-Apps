@interface AWETopBarBackgroundController : AWEBaseController
@property (nonatomic) AWEHPTopBackgroundView backgroundView;
@property (nonatomic) BOOL coldStartBackground;
- (void)setAccessoriesHidden:;
- (void)viewDidLoadAfterTableviewSetup;
- (void)splashDidAppear;
- (void)setColdStartBackground:;
- (BOOL)coldStartBackground;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (void)viewDidDisappear;
@end
