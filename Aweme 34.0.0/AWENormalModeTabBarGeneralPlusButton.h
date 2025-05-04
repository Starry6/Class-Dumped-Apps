@interface AWENormalModeTabBarGeneralPlusButton : AWENormalModeTabBarPlusButton
@property (nonatomic) UIView<AWETabbarInnerView> innerView;
@property (nonatomic) BOOL alreadyHighlighted;
- (void)setInnerView:;
- (id)aAWENormalModeTabBarPlusButtonCommonAdapter;
- (void)setImageForSpecialButtonState:;
- (BOOL)shouldShowDynamicIcon;
- (id)dynamicDarkPlusIcon;
- (BOOL)alreadyHighlighted;
- (void)setAlreadyHighlighted:;
- (id)dynamicLightPlusIcon;
- (void)setHighlighted:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)innerView;
+ (Class)aAWENormalModeTabBarPlusButtonCommonAdapterClass;
+ (id)button;
@end
