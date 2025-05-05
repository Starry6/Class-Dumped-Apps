@interface CNHeap : NSObject
@property (nonatomic) NSString rawDataString;
@property (nonatomic) NSMutableArray heapObjects;
@property (nonatomic) NSMutableDictionary heapObjectsByClassAndBinary;
- (void).cxx_destruct;
- (id)rawDataString;
- (void)setRawDataString:;
- (id)heapObjects;
- (void)setHeapObjects:;
- (id)heapObjectsByClassAndBinary;
- (void)setHeapObjectsByClassAndBinary:;
@end
