@interface AWEIMBaseViewControllerNaviBarController : NSObject
@property (nonatomic) AWEIMBaseViewControllerNaviBarControllerModel model;
@property (nonatomic) AWEIMBaseViewControllerNaviBarControllerContext context;
@property (nonatomic) AWEButton settingButton;
@property (nonatomic) UIStackView rightButtonsContainerView;
@property (nonatomic) <AWEIMBaseViewControllerNaviBarControllerDelegate> delegate;
- (void)__addNaviBarCustomView:forPosition:target:action:;
- (long long)__imListNaviBarEntranceType;
- (void)__refreshNavigationViews;
- (void)enterSearchBarPage;
- (BOOL)isBubbleViewDisplaying;
- (void)renderModel:context:;
- (id)rightButtonsContainerView;
- (void)setRightButtonsContainerView:;
- (void)setSettingButton:;
- (id)settingButton;
- (BOOL)showBubbleViewIfNeeded;
- (void)showExtensionConfig;
- (void)updatePointViewWithHidden:animated:;
- (id)model;
- (void)setModel:;
- (id)context;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContext:;
@end
