@interface AWENormalModeTabBarFeedView : AWENormalModeTabBarTextView
@property (nonatomic) UIView rightIndicatorContaienrView;
@property (nonatomic) UIImageView rightIndicatorImageView;
@property (nonatomic) BOOL hasShowRightIndicatorImage;
- (void)awe_preferDarkTheme;
- (void)awe_preferLightTheme;
- (void)showViewScaleAnimation;
- (void)updateRightIndicatorWithImage:animated:;
- (id)rightIndicatorImageView;
- (id)addRightIndicatorViewWithImage:;
- (void)setRightIndicatorImageView:;
- (void)removeRightIndicatorView:;
- (id)rightIndicatorContaienrView;
- (void)trySetupRightIndicatorContainerView;
- (void)setRightIndicatorContaienrView:;
- (BOOL)hasShowRightIndicatorImage;
- (void).cxx_destruct;
@end
