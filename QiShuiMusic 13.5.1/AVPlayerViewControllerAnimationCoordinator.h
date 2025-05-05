@interface AVPlayerViewControllerAnimationCoordinator : NSObject
@property (nonatomic) NSMutableArray animations;
@property (nonatomic) NSMutableArray completions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animations;
- (id)init;
- (id)completions;
- (void).cxx_destruct;
- (void)addCoordinatedAnimations:completion:;
- (void)performCoordinatedAnimations;
- (void)didFinishAnimations:;
@end
