@interface BMCoreDuetMediaUsageStore : NSObject
@property (nonatomic) <_DKKnowledgeSaving> knowledgeStore;
@property (nonatomic) _CDClientContext contextStore;
- (id)init;
- (id)removeObjectsMatchingPredicate:fromArrayAtKeyPath:;
- (void).cxx_destruct;
- (id)contextStore;
- (id)knowledgeStore;
- (BOOL)addContextValue:toArrayAtKeyPath:;
- (BOOL)saveKnowledgeEvent:error:;
@end
