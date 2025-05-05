@interface IESVideoBSLinkedList : NSObject
@property (nonatomic) IESVideoBSLinkedNode head;
@property (nonatomic) IESVideoBSLinkedNode tail;
@property (nonatomic) IESVideoBSObjectPool pool;
@property (nonatomic) Q length;
- (id)getHeadObject;
- (void)setHead:;
- (id)head;
- (id)tail;
- (id)init;
- (void)enqueueObject:;
- (id)dequeueObject;
- (void)setPool:;
- (void).cxx_destruct;
- (id)pool;
- (id)description;
- (void)setTail:;
- (unsigned long long)length;
- (void)setLength:;
- (id)getAllObjects;
@end
