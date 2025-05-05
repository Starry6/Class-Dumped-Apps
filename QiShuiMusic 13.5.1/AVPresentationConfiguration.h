@interface AVPresentationConfiguration : NSObject
@property (nonatomic) Q transitionStyle;
@property (nonatomic) double transitionDuration;
- (double)transitionDuration;
- (unsigned long long)transitionStyle;
+ (id)configurationWithTransitionStyle:transitionDuration:;
@end
