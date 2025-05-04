@interface AWEDCardCacheQueue : NSObject
@property (nonatomic) NSMutableArray array;
@property (nonatomic) q maxSize;
- (long long)maxSize;
- (void)setMaxSize:;
- (id)peek;
- (id)array;
- (id)dequeue;
- (void)clear;
- (void)setArray:;
- (id)initWithSize:;
- (BOOL)isEmpty;
- (long long)size;
- (void).cxx_destruct;
- (void)enqueue:;
@end
