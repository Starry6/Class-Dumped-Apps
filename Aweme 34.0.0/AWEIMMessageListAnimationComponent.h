@interface AWEIMMessageListAnimationComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageTableViewInterface> tableViewService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentCenter;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)animationWithConfig:before:animation:completion:;
- (void)setTableViewService:;
- (id)tableViewService;
- (void)doAnimationWithConfig:task:updateCellBlock:before:animation:completion:;
- (void).cxx_destruct;
- (void)enqueueTask:;
+ (BOOL)canCreateComponentWithContext:;
@end
