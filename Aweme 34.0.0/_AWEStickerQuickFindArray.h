@interface _AWEStickerQuickFindArray : NSMutableArray
@property (nonatomic) NSHashTable table;
@property (nonatomic) NSMutableArray arrM;
- (id)arrM;
- (void)setArrM:;
- (void)setTable:;
- (void)replaceObjectAtIndex:withObject:;
- (void)insertObject:atIndex:;
- (id)init;
- (id)array;
- (void)removeObjectAtIndex:;
- (void)removeLastObject;
- (id)table;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)objectAtIndex:;
- (void)addObject:;
- (BOOL)containsObject:;
@end
