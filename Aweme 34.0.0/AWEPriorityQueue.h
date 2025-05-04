@interface AWEPriorityQueue : NSObject
@property (nonatomic) NSMutableArray array;
@property (nonatomic) BOOL isEmpty;
- (unsigned long long)p_binarySearchForInsert:;
- (void)insertElement:;
- (id)getHighestPriorityElement;
- (void)deleteHighestPriorityElement;
- (id)init;
- (id)array;
- (void)setArray:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)removeAllElements;
@end
