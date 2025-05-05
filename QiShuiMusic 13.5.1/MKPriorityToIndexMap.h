@interface MKPriorityToIndexMap : NSObject
- (id)init;
- (id)initWithPriorities:;
- (void)appendRemainingPriorities:prioritiesToReAdd:;
- (long long)indexOfPriority:;
- (id)objectForKeyedSubscript:;
- (double)priorityOfIndex:;
- (void).cxx_destruct;
- (BOOL)addPriorities:;
- (BOOL)containsPriority:;
- (void)insertPriorities:prioritiesToReAdd:;
- (BOOL)contains:;
- (id)nextPriorityFromPriorities:prioritiesToReAdd:;
@end
