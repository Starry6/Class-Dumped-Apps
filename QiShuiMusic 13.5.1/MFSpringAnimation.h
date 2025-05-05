@interface MFSpringAnimation : CASpringAnimation
@property (nonatomic) MFSpringAnimationDelegate delegate;
- (void)addCompletionBlock:;
- (id)init;
+ (id)springAnimationWithKeyPath:fromValue:toValue:;
@end
