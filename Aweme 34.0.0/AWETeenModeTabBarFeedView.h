@interface AWETeenModeTabBarFeedView : AWETeenModeTabBarTextView
@property (nonatomic) UIView rightIndicatorContaienrView;
@property (nonatomic) UIImageView rightIndicatorImageView;
- (void)awe_preferDarkTheme;
- (void)awe_preferLightTheme;
- (void)updateRightIndicatorWithImage:animated:;
- (id)rightIndicatorImageView;
- (id)addRightIndicatorViewWithImage:;
- (void)setRightIndicatorImageView:;
- (void)removeRightIndicatorView:;
- (id)rightIndicatorContaienrView;
- (void)trySetupRightIndicatorContainerView;
- (void)setRightIndicatorContaienrView:;
- (void).cxx_destruct;
@end
