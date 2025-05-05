@interface SFPopoverSizingTableViewController : UITableViewController
@property (nonatomic) q minimumNumberOfRows;
@property (nonatomic) q maximumNumberOfRows;
@property (nonatomic) BOOL hasTranslucentAppearance;
- (void)willTransitionToTraitCollection:withTransitionCoordinator:;
- (void)updatePreferredContentSize;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)traitCollectionDidChange:;
- (void)didMoveToParentViewController:;
- (void)cancelKeyPressed;
- (void)willMoveToParentViewController:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (id)_backgroundBlurEffect;
- (long long)minimumNumberOfRows;
- (long long)maximumNumberOfRows;
- (void)_updateTranslucentAppearanceIfNeeded;
- (BOOL)_needsTranslucentAppearanceUpdate;
- (BOOL)hasTranslucentAppearance;
- (void)updateTranslucentAppearance;
- (id)backgroundColorUsingTranslucentAppearance:;
+ (id)tableViewCellForSizeEstimation;
+ (double)caculateHeightForTableView:targetGlobalRow:outGlobalRow:;
@end
