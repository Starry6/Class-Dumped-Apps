@interface MFSimpleAnimationCoordinator : NSObject
@property (nonatomic) NSMutableArray animations;
@property (nonatomic) NSMutableArray completions;
@property (nonatomic) BOOL animated;
- (id)animations;
- (id)init;
- (void)setAnimated:;
- (void)setCompletions:;
- (BOOL)isAnimated;
- (id)completions;
- (void).cxx_destruct;
- (void)setAnimations:;
- (id)initCoordinatorAnimated:;
- (void)animateAlongsideAnimations:completion:;
- (void)playAnimations;
- (void)playCompletions:;
@end
