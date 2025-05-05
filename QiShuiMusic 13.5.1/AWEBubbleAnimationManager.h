@interface AWEBubbleAnimationManager : NSObject
@property (nonatomic) NSMutableArray animations;
- (void)removeAnimationsForBubble:;
- (void)runAnimation:completion:;
- (id)runAnimationWithBubble:animations:completion:;
- (id)runCoreAnimationWithBubble:animations:completion:;
- (id)animations;
- (id)init;
- (void).cxx_destruct;
- (void)setAnimations:;
+ (id)sharedManager;
@end
