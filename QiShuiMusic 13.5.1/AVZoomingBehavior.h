@interface AVZoomingBehavior : NSObject
@property (nonatomic) AVZoomingBehaviorContext behaviorContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)willMoveToContext:;
- (id)behaviorContext;
- (void)setBehaviorContext:;
- (void)didMoveToContext:;
- (void)willRemoveFromContext:;
- (void)didRemoveFromContext:;
+ (Class)behaviorContextClass;
@end
