@interface CSJFullScreenTransitioningDelegate : NSObject
@property (nonatomic) {CGSize=dd} adSize;
@property (nonatomic) CSJMaterialMeta material;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAdSize:materialMeta:;
- (void)setAdSize:;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (void)animateTransition:;
- (double)transitionDuration:;
- (id)animationControllerForDismissedController:;
- (void).cxx_destruct;
- (id)material;
- (id)adSize;
- (void)setMaterial:;
@end
