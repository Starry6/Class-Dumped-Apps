@interface WKFullScreenInteractiveTransition : NSObject
@property (nonatomic) WKFullscreenAnimationController animator;
@property (nonatomic) double completionSpeed;
@property (nonatomic) q completionCurve;
@property (nonatomic) BOOL wantsInteractiveStart;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animator;
- (BOOL)wantsInteractiveStart;
- (void)cancelInteractiveTransition;
- (void)startInteractiveTransition:;
- (void).cxx_destruct;
- (void)finishInteractiveTransition;
- (id).cxx_construct;
- (id)initWithAnimator:anchor:;
- (void)updateInteractiveTransition:withTranslation:;
- (void)updateInteractiveTransition:withScale:andTranslation:;
@end
