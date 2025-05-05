@interface PLMergePolicy : NSMergePolicy
@property (nonatomic) BOOL isResolvingConflicts;
- (BOOL)resolveConflicts:error:;
- (BOOL)resolveOptimisticLockingVersionConflicts:error:;
- (BOOL)isResolvingConflicts;
@end
