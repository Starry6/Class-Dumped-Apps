@interface IESLiveSaaSGameMessageQueue : NSObject
@property (nonatomic) NSMutableArray array;
- (id)front;
- (id)init;
- (void)enqueue:;
- (BOOL)isEmpty;
- (id)array;
- (void)dequeue;
- (void)clear;
- (void).cxx_destruct;
- (void)setArray:;
- (unsigned long long)count;
@end
