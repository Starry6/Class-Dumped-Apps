@interface BU_IESGurdLRUCacheLinkedList : NSObject
@property (nonatomic) NSMutableDictionary linkedNodeDictionary;
@property (nonatomic) BU_IESGurdLRUCacheLinkedNode headLinkedNode;
@property (nonatomic) BU_IESGurdLRUCacheLinkedNode tailLinkedNode;
@property (nonatomic) q capacity;
- (void)appendLinkedNodeForChannel:;
- (void)bringLinkedNodeToHeadForChannel:;
- (id)channelsToBeDelete;
- (void)deleteLinkedNodeForChannel:;
- (id)headLinkedNode;
- (id)linkedNodeDictionary;
- (void)setHeadLinkedNode:;
- (void)setLinkedNodeDictionary:;
- (void)setTailLinkedNode:;
- (id)tailLinkedNode;
- (long long)capacity;
- (void)setCapacity:;
- (void).cxx_destruct;
- (id)description;
@end
