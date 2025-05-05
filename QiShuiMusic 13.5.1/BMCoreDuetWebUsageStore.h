@interface BMCoreDuetWebUsageStore : NSObject
@property (nonatomic) <_DKKnowledgeSaving> knowledgeStore;
@property (nonatomic) _CDClientContext contextStore;
- (id)init;
- (id)removeObjectsMatchingPredicate:fromArrayAtKeyPath:;
- (void)addObjects:andRemoveObjects:fromArrayAtKeyPath:responseQueue:withCompletion:;
- (void).cxx_destruct;
- (void)removeObjects:fromArrayAtKeyPath:responseQueue:withCompletion:;
- (id)contextStore;
- (id)knowledgeStore;
- (BOOL)addContextValue:toArrayAtKeyPath:;
- (BOOL)saveKnowledgeEvent:error:;
@end
