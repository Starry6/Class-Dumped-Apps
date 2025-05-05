@interface IESIMParallelSlideRightTransition : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)allowTriggerDirectionForContext:;
- (void)startDefaultAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:interactionType:completionHandler:;
- (unsigned long long)interactionType;
@end
