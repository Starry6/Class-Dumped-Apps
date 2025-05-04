@interface AWETranslationTransitionController : NSObject
@property (nonatomic) Q translationStyle;
@property (nonatomic) q durationType;
@property (nonatomic) AWEHorizontalDismissTransition swipeInteractionController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)swipeInteractionController;
- (id)initWithTranslationStyle:;
- (void)setDurationType:;
- (long long)durationType;
- (void)setSwipeInteractionController:;
- (void)setTranslationStyle:;
- (unsigned long long)translationStyle;
- (id)init;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
- (id)interactionControllerForDismissal:;
- (void).cxx_destruct;
@end
