@interface FBSMutableProcessExecutionStrategy : FBSProcessExecutionStrategy
@property (nonatomic) I reason;
@property (nonatomic) I flags;
@property (nonatomic) q schedulingPolicy;
@property (nonatomic) q graphicsPolicy;
@property (nonatomic) q jetsamPolicy;
- (id)copyWithZone:;
@end
