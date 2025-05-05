@interface BUPersistenceLRULinkedList : NSObject
@property (nonatomic) BUPersistenceLRULinkedNode header;
@property (nonatomic) BUPersistenceLRULinkedNode tail;
@property (nonatomic) NSMapTable mapTable;
@property (nonatomic) Q currentCapacityCount;
@property (nonatomic) Q currentCapacitySize;
- (void)bringNodeToHeadWithKey:;
- (void)bringNodeToHeadWithKeys:;
- (unsigned long long)currentCapacityCount;
- (unsigned long long)currentCapacitySize;
- (void)insertNodeAtHeadWithKey:;
- (void)removeNodeWithKey:;
- (id)removeTailNode;
- (void)setCurrentCapacityCount:;
- (void)setCurrentCapacitySize:;
- (void)setHeader:;
- (id)tail;
- (void)removeAll;
- (id)init;
- (void).cxx_destruct;
- (void)setTail:;
- (id)header;
- (id)mapTable;
- (void)setMapTable:;
@end
