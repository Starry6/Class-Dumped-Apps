@interface AVBehaviorStorage : NSObject
@property (nonatomic) @ AVKitOwner;
@property (nonatomic) NSMapTable behaviorsAndBehaviorContexts;
- (void)addBehavior:;
- (void)removeBehavior:;
- (id)behaviors;
- (void).cxx_destruct;
- (id)initWithAVKitOwner:;
- (void)enumerateAllBehaviorsUsingBlock:;
- (void)enumerateAllBehaviorsConformingToProtocol:usingBlock:;
- (id)behaviorOfClass:;
- (void)enumerateAllBehaviorContextsUsingBlock:;
- (void)enumerateAllBehaviorContextsConformingToProtocol:usingBlock:;
- (void)enumerateAllBehaviorContextsImplementingSelector:forProtocol:usingBlock:;
- (id)behaviorContextOfClass:;
- (id)AVKitOwner;
- (void)setAVKitOwner:;
- (id)behaviorsAndBehaviorContexts;
@end
