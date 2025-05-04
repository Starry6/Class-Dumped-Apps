@interface AWEShareDislikeStrategy : AWEBaseDislikeStrategy
@property (nonatomic) BOOL currShouldDelete;
@property (nonatomic) @? currDislikeProcessBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterMethod;
- (id)aAWEPadModuleAdapter;
- (unsigned long long)methodType;
- (id)aAWEPlayInteractionAdapter;
- (void)dislikeWithUser:shouldDelete:completion:;
- (BOOL)shouldTrackDislikeEvent;
- (void)dislikeStrategyAfterTrackDislike;
- (id)dislikeProcessBlock;
- (BOOL)currShouldDelete;
- (id)currDislikeProcessBlock;
- (void)setCurrShouldDelete:;
- (void)setCurrDislikeProcessBlock:;
- (void).cxx_destruct;
- (id)requestCompletionBlock;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
@end
