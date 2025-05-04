@interface AWEBeautyContentAnimationController : NSObject
@property (nonatomic) BOOL presenting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithIsPresenting:;
- (BOOL)isPresenting;
- (void)setPresenting:;
- (double)transitionDuration:;
- (void)animateTransition:;
@end
