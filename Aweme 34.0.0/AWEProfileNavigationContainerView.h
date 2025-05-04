@interface AWEProfileNavigationContainerView : UIView
@property (nonatomic) NSArray leftDataSource;
@property (nonatomic) NSArray rightDataSource;
- (id)allDataSource;
- (void)onNavigationStickToTop:;
- (id)currentLeftShowTypes;
- (id)currentRightShowTypes;
- (void)updateWithAlpha:force:;
- (id)currentLeftShowViews;
- (id)currentRightShowViews;
- (void)refreshWithLeftDataSource:;
- (void)refreshWithRightDataSource:;
- (void)refreshWithLeftDataSource:rightDataSource:;
- (void)disableClickWhenAlphaLessThan:;
- (id)leftDataSource;
- (void)setLeftDataSource:;
- (id)rightDataSource;
- (void)setRightDataSource:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
