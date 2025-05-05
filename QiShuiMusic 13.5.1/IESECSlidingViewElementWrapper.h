@interface IESECSlidingViewElementWrapper : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) UIViewController<IESECTabViewElementProtocol> wrapperObject;
@property (nonatomic) BOOL balancedCallAppearanceTransitionMethod;
@property (nonatomic) BOOL hasLoaded;
- (void)endAppearanceTransition:animated:;
- (id)initWithWrapperObject:;
- (void)setBalancedCallAppearanceTransitionMethod:;
- (id)wrapperObject;
- (BOOL)hasLoaded;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)beginAppearanceTransition:animated:;
- (BOOL)isAppeared;
- (void)setHasLoaded:;
+ (id)tabViewElementWrapperWithObject:;
@end
