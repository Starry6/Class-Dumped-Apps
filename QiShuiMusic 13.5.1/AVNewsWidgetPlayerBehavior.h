@interface AVNewsWidgetPlayerBehavior : NSObject
@property (nonatomic) AVNewsWidgetPlayerBehaviorContext behaviorContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)willMoveToContext:;
- (id)behaviorContext;
- (void)setBehaviorContext:;
- (void)didMoveToContext:;
- (void)willRemoveFromContext:;
- (void)didRemoveFromContext:;
- (id)playerForContentTransitionType:;
- (void)willBeginContentTransition;
- (void)didUpdateContentTransitionProgress:;
- (void)willCompleteContentTransition;
- (void)didCompleteContentTransition;
- (void)willCancelContentTransition;
- (void)didCancelContentTransition;
+ (Class)behaviorContextClass;
@end
