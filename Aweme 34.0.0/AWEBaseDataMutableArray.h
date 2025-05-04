@interface AWEBaseDataMutableArray : NSMutableArray
@property (nonatomic) NSMutableArray feedMutableArray;
@property (nonatomic) NSMutableArray observers;
- (void)registerForDataObserver:;
- (void)setFeedMutableArray:;
- (id)feedMutableArray;
- (void)deRegisterForDataObserver:;
- (void)notifyObservers;
- (void)replaceObjectAtIndex:withObject:;
- (void)insertObject:atIndex:;
- (unsigned long long)indexOfObject:;
- (id)init;
- (void)addObjectsFromArray:;
- (void)removeObjectAtIndex:;
- (void)removeLastObject;
- (void)removeAllObjects;
- (unsigned long long)count;
- (id)observers;
- (void).cxx_destruct;
- (id)objectAtIndex:;
- (void)addObject:;
- (void)setObservers:;
@end
