@interface HTSLivePopupAnimator : NSObject
@property (nonatomic) BOOL presenting;
@property (nonatomic) double offset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animationsShow:animateTransition:animations:completion:;
- (void)setPresenting:;
- (void)animateTransition:;
- (void)setOffset:;
- (double)transitionDuration:;
- (double)offset;
- (BOOL)presenting;
- (id)initWithPresenting:;
@end
