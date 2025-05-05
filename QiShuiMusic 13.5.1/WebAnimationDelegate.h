@interface WebAnimationDelegate : NSObject
- (void)animationDidStart:;
- (void)setOwner:;
- (void)animationDidStop:finished:;
@end
