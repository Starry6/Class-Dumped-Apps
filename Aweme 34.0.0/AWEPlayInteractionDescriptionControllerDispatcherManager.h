@interface AWEPlayInteractionDescriptionControllerDispatcherManager : NSObject
@property (nonatomic) NSArray conterllerArray;
@property (nonatomic) AWEPlayInteractionDescriptionContext descriptionContext;
@property (nonatomic) AWEPlayInteractionDescriptionElementConfig elementConfig;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void)viewController_viewDidDisappear;
- (id)elementConfig;
- (void)setElementConfig:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (id)conterllerArray;
- (void)descriptionLabelDidClickIsExpand:;
- (void)setConterllerArray:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
- (id)descriptionContext;
- (void)setDescriptionContext:;
@end
