@interface AWEMixBarInPlaceTransition : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startDefaultAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:interactionType:completionHandler:;
- (id)createTopLevelViewConfigForContextProvider:topView:;
- (id)addTriggerAndTabbarIfNeedForConfig:viewController:;
- (id)createTopLevelViewConfigForViews:topView:stableRect:changeRect:;
- (unsigned long long)interactionType;
+ (void)setTriggerView:;
+ (id)triggerView;
@end
