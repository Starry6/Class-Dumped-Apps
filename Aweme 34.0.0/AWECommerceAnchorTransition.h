@interface AWECommerceAnchorTransition : NSObject
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTransitionType:;
- (void)dismissAnimation:;
- (void)presentAnimation:;
- (unsigned long long)type;
- (double)transitionDuration:;
- (void)animateTransition:;
- (void)setType:;
+ (id)transitionWithTransitionType:;
@end
