@interface AWETransitionTemplateInteractionController : NSObject
@property (nonatomic) <AWETransitionContextProvider> contextProvider;
@property (nonatomic) double completionSpeed;
@property (nonatomic) q completionCurve;
@property (nonatomic) BOOL wantsInteractiveStart;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startCustomPanDrivenTransition:;
- (void)startFreeTransition:;
- (void)startInteractiveTransition:;
- (void).cxx_destruct;
- (id)contextProvider;
- (void)setContextProvider:;
+ (id)instanceWithContextProvider:;
@end
