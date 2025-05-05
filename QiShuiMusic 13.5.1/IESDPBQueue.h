@interface IESDPBQueue : NSObject
@property (nonatomic) NSMutableArray array;
@property (nonatomic) q headIndex;
@property (nonatomic) Q count;
@property (nonatomic) BOOL empty;
@property (nonatomic) @ peekHead;
- (id)peekHead;
- (id)init;
- (void)enqueue:;
- (id)array;
- (id)dequeue;
- (BOOL)empty;
- (void).cxx_destruct;
- (void)setArray:;
- (id)description;
- (unsigned long long)count;
- (long long)headIndex;
- (void)setHeadIndex:;
@end
