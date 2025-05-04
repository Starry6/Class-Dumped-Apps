@interface AWEIMFeedVideoListMutableArray : NSMutableArray
@property (nonatomic) NSMutableArray feedMutableArray;
@property (nonatomic) @? objectAtIndexBlock;
- (void)setFeedMutableArray:;
- (id)feedMutableArray;
- (void)setObjectAtIndexBlock:;
- (id)objectAtIndexBlock;
- (void)replaceObjectAtIndex:withObject:;
- (void)insertObject:atIndex:;
- (unsigned long long)indexOfObject:;
- (id)init;
- (void)removeObjectAtIndex:;
- (void)removeLastObject;
- (void)removeAllObjects;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)objectAtIndex:;
- (void)addObject:;
@end
