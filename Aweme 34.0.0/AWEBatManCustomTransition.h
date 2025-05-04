@interface AWEBatManCustomTransition : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (double)transitionDuration:;
- (void)animateTransition:;
@end
