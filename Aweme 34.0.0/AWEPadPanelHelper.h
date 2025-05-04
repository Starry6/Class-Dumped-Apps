@interface AWEPadPanelHelper : NSObject
@property (nonatomic) AWEPadPanelTransitionController transitionController;
@property (nonatomic) UIScrollView contentScrollView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupTransitionController:contentHeight:cornerRadius:disablePanGes:;
- (void)updateContentHeight:viewController:;
- (void)setupTransitionController:contentHeight:cornerRadius:;
- (void)changeViewCornerRadius:viewController:;
- (void)setupTransitionController:contentHeight:contentWidth:cornerRadius:;
- (void)updateContentHeight:contentWidth:viewController:;
- (id)contentScrollView;
- (void).cxx_destruct;
- (id)transitionController;
- (void)setTransitionController:;
- (void)setContentScrollView:;
@end
