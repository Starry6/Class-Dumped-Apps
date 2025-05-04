@interface AWEFeedLRUMap : NSObject
- (id)removeTailNode;
- (void)insertNodeAtHead:;
- (void)bringNodeToHead:;
- (id)getAllNodes;
- (id)init;
- (void)dealloc;
- (void)removeAll;
- (void)removeNode:;
- (void).cxx_destruct;
@end
