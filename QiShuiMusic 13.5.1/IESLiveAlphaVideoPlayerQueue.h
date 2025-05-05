@interface IESLiveAlphaVideoPlayerQueue : NSObject
@property (nonatomic) NSMutableArray array;
- (id)init;
- (void)enqueue:;
- (void)dealloc;
- (id)array;
- (id)dequeue;
- (void).cxx_destruct;
- (void)setArray:;
@end
