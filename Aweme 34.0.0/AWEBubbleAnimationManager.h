@interface AWEBubbleAnimationManager : NSObject
@property (nonatomic) NSMutableArray animations;
- (id)runAnimationWithBubble:animations:completion:;
- (void)runAnimation:completion:;
- (id)runCoreAnimationWithBubble:animations:completion:;
- (void)removeAnimationsForBubble:;
- (id)init;
- (id)animations;
- (void).cxx_destruct;
- (void)setAnimations:;
+ (id)sharedManager;
@end
