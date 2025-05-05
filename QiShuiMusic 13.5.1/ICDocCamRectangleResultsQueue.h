@interface ICDocCamRectangleResultsQueue : NSObject
@property (nonatomic) NSMutableArray array;
- (id)init;
- (void)enqueue:;
- (id)peek;
- (id)array;
- (id)dequeue;
- (void)clear;
- (void).cxx_destruct;
- (void)setArray:;
- (long long)size;
- (id)peek:;
- (id)peekTail;
- (void)apply:atIndex:;
- (void)apply:fromIndex:toIndex:;
@end
