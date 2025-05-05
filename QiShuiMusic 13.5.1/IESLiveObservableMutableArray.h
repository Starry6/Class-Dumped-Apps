@interface IESLiveObservableMutableArray : NSObject
@property (nonatomic) NSMutableArray array;
@property (nonatomic) <IESLiveValueChangedDelegate> delegate;
@property (nonatomic) Q count;
- (void)removeObjectsInRange:;
- (void)removeObjectsAtIndexes:;
- (void)insertObjects:atIndexes:;
- (id)init;
- (void)removeObjectsInArray:;
- (void)setDelegate:;
- (void)insertObject:atIndex:;
- (id)array;
- (void)removeObjectAtIndex:;
- (void)replaceObjectAtIndex:withObject:;
- (void)addObject:;
- (void)removeAllObjects;
- (void)removeObject:;
- (void)replaceObjectsAtIndexes:withObjects:;
- (id)delegate;
- (void)removeLastObject;
- (void).cxx_destruct;
- (void)setArray:;
- (unsigned long long)count;
- (void)replaceObjectsInRange:withObjectsFromArray:range:;
- (void)replaceObjectsInRange:withObjectsFromArray:;
@end
