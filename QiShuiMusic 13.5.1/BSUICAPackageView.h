@interface BSUICAPackageView : UIView
@property (nonatomic) NSArray publishedObjectNames;
@property (nonatomic) NSObject<CAStateControllerDelegate> stateControllerDelegate;
- (void)stateController:transitionDidStop:completed:;
- (id)publishedObjectNames;
- (id)initWithURL:;
- (BOOL)setState:animated:;
- (void)setStateControllerDelegate:;
- (void)layoutSubviews;
- (BOOL)setState:;
- (id)stateControllerDelegate;
- (id)initWithPackageName:inBundle:;
- (BOOL)setState:onLayer:animated:transitionSpeed:completion:;
- (id)sizeThatFits:;
- (BOOL)setState:animated:transitionSpeed:completion:;
- (void).cxx_destruct;
- (id)publishedObjectWithName:;
- (void)stateController:didSetStateOfLayer:;
- (void)stateController:transitionDidStart:speed:;
@end
