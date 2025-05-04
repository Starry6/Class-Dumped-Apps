@interface AWETeenPinchZoomOutNonInteractedTransition : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startDefaultAnimationWithFromVC:toVC:fromContextProvider:toContextProvider:containerView:context:interactionType:completionHandler:;
- (BOOL)shouldBackgroundPlayWithReferString:;
- (double)transitionDuration;
- (unsigned long long)interactionType;
@end
