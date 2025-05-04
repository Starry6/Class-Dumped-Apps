@interface AWEIMMessageTabEnterpriseSwitchModePopupViewModel : NSObject
@property (nonatomic) UIViewController viewControllerForPresentation;
@property (nonatomic) AWEIMEnterpriseModeGuideConfig guideConfig;
@property (nonatomic) @? rogerPopupBlock;
@property (nonatomic) @? dismissPopupBlock;
- (id)guideConfig;
- (void)setGuideConfig:;
- (id)dismissPopupBlock;
- (void)setViewControllerForPresentation:;
- (void)setDismissPopupBlock:;
- (void)setRogerPopupBlock:;
- (id)rogerPopupBlock;
- (id)viewControllerForPresentation;
- (void).cxx_destruct;
@end
