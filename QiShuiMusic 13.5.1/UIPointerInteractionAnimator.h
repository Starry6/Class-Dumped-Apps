@interface UIPointerInteractionAnimator : NSObject
@property (nonatomic) NSString debugName;
@property (nonatomic) NSMutableArray animations;
@property (nonatomic) NSMutableArray completions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addAnimations:;
- (id)animations;
- (void)addCompletion:;
- (void)setCompletions:;
- (id)debugName;
- (id)completions;
- (void)setDebugName:;
- (void).cxx_destruct;
- (void)performAllCompletions:;
- (void)setAnimations:;
- (void)performAllAnimations;
@end
