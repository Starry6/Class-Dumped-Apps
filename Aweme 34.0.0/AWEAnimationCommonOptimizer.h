@interface AWEAnimationCommonOptimizer : NSObject
@property (nonatomic) BOOL enableCoreAnimationOpt;
@property (nonatomic) double animationDelay;
- (BOOL)enableCoreAnimationOpt;
- (void)setEnableCoreAnimationOpt:;
- (double)animationDelay;
- (void)setAnimationDelay:;
+ (BOOL)enableMusicAnimationOpt;
+ (BOOL)enableMusicCAAnimationOpt;
+ (BOOL)enableAnimationWithKey:;
+ (float)stopAnimationDurationThreshold;
+ (id)optimizer;
@end
