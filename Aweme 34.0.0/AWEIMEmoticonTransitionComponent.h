@interface AWEIMEmoticonTransitionComponent : AWEIMComponentBase
@property (nonatomic) UIViewController topViewController;
@property (nonatomic) BOOL ipadTransitioned;
@property (nonatomic) <AWEIMEmoticonPanelBoxComponent> boxComponent;
@property (nonatomic) <AWEIMEmoticonPanelSyncComponent> syncComponent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awe_viewController:willTransitionToSize:transitionCoordinator:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)layoutSubviewsIfNeeded;
- (BOOL)ipadTransitioned;
- (id)boxComponent;
- (id)syncComponent;
- (void)setIpadTransitioned:;
- (void)setBoxComponent:;
- (void)setSyncComponent:;
- (id)topViewController;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setTopViewController:;
+ (BOOL)canCreateComponentWithContext:;
@end
