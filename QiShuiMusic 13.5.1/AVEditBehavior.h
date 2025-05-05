@interface AVEditBehavior : NSObject
@property (nonatomic) AVEditBehaviorContext behaviorContext;
@property (nonatomic) <AVEditBehaviorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)willMoveToContext:;
- (id)behaviorContext;
- (void)setBehaviorContext:;
- (void)didMoveToContext:;
- (void)willRemoveFromContext:;
- (void)didRemoveFromContext:;
+ (Class)behaviorContextClass;
@end
