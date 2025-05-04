@interface AWEIMLynxPopupViewControllerHandleComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)setLynxPopupViewControllerDelegateIfNeed:;
+ (BOOL)canCreateComponentWithContext:;
@end
