@interface CSJUgenLottieHandler : UgenLottieHandler
- (void)animationWithContentsOfURL:completed:;
- (void)animationWithFilepath:completed:;
- (void)animationWithJSON:inBundle:completed:;
- (void)animationWithName:inBundle:completed:;
- (id)lottieView;
- (id)init;
@end
