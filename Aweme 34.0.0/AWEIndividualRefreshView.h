@interface AWEIndividualRefreshView : UIView
@property (nonatomic) UIImageView tabbarPlaceholderView;
@property (nonatomic) UIView interactionPlaceholderView;
- (void)showTabbarPlaceholder;
- (void)showInteractionPlaceholder;
- (void)loadUI;
- (void)loadTabbarPlaceholder;
- (void)loadInteractionPlaceholder;
- (void)setTabbarPlaceholderView:;
- (id)tabbarPlaceholderView;
- (void)setInteractionPlaceholderView:;
- (id)interactionPlaceholderView;
- (void)hiddenTabbarPlaceholder;
- (void)hiddenInteractionPlaceholder;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
