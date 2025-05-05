@interface IESIMTransitionTemplateAnimationController : NSObject
@property (nonatomic) <IESIMTransitionContextProvider> contextProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animateTransition:;
- (double)transitionDuration:;
- (void).cxx_destruct;
- (id)contextProvider;
- (void)setContextProvider:;
+ (id)instanceWithContextProvider:;
@end
