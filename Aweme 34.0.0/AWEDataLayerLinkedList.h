@interface AWEDataLayerLinkedList : NSObject
- (void)appendLinkedNode:;
- (void)bringLinkedNodeToHead:;
- (void)removeLinkedNode:;
- (void)removeAllLinkedNodes;
- (id)removeLinkedNodesUntilCapacity;
- (void).cxx_destruct;
+ (id)linkedListWithCapacity:;
@end
