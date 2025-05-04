@interface AWECustomRecordTransitionDelegate : NSObject
@property (nonatomic) Q transitionType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTransitionType:;
- (void)setTransitionType:;
- (unsigned long long)transitionType;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
@end
